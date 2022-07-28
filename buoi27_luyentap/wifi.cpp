#include<bits/stdc++.h>
using namespace std;
string romeo;
string juliet;
int sign=0,cnt=0;
double chance,khanang=1;
double res;
int C(int a,int b)
{
    int tuso=1;
    int mauso=1;
    for(int i=1;i<=b;i++)
    {
        tuso=tuso*i;
    }
    for(int i=1;i<=b-a;i++)
        mauso=mauso*i;
    for(int i=1;i<=a;i++)
        mauso=mauso*i;
    tuso=tuso/mauso;
    return tuso;
}
void solve()
{

    for(int i=1;i<=juliet.size()-1;i++)
    {
        if(juliet[i]=='+')
            sign++;
        else
            sign--;
    }
    for(int i=1;i<=romeo.size()-1;i++)
    {
        if(romeo[i]=='+')
            sign--;
        if(romeo[i]=='-')
            sign++;
        if(romeo[i]=='?')
            cnt++;
    }
    for(int i=1;i<=cnt;i++)
        khanang=khanang*2;
    if(cnt==0&&sign==0)
    {
        chance=1;
        cout<<fixed<<setprecision(10)<<chance;
    }
    if(cnt==0&&sign!=0)
    {
        chance=0;
        cout<<fixed<<setprecision(10)<<chance;
    }
    if(cnt!=0)
    {
        res=(cnt+abs(sign))/2;
        if((int)res!=res)
        {
            chance=0;
            cout<<fixed<<setprecision(10)<<chance;
        }
        else
        {
            chance= C(res,2)/ khanang;
            cout<<fixed<<setprecision(10)<<chance;
        }
    }

}
int main()
{

    cin>>juliet>>romeo;
    solve();
}
