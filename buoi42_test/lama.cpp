#include<bits/stdc++.h>
using namespace std;
string s;
long long a[20];
long long res;
long long length;
void enter()
{
    freopen("lama.inp","r",stdin);
    freopen("lama.out","w",stdout);
    cin>>s;
    length=s.size()-1;
}
void solve()
{
    for(long long i=0;i<=length;i++)
    {
        if(s[i]=='I')
            a[i]=1;
        if(s[i]=='V')
            a[i]=5;
        if(s[i]=='X')
            a[i]=10;
        if(s[i]=='L')
            a[i]=50;
        if(s[i]=='C')
            a[i]=100;
        if(s[i]=='D')
            a[i]=500;
        if(s[i]=='M')
            a[i]=1000;
    }
    res=a[length];
    for(long long i=length;i>=0;i--)
    {
        if(a[i-1]<a[i])
            res=res-a[i-1];
        else
            res=res+a[i-1];
    }
    cout<<res;
}
int main()
{
    enter();
    solve();
}
