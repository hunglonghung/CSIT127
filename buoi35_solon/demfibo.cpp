#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,res;
long long remember;
long long cnt=0;
long long check(string a, string b)
{
    while(a.size()<b.size())
        a='0'+a;
    while(a.size()>b.size())
        b='0'+b;
    if(a>b)
        return 1;
    if(a==b)
        return 0;
    if(a<b)
        return -1;
}
string sum(string a, string b)
{
    while(a.size()<b.size())
        a='0'+a;
    while(a.size()>b.size())
        b='0'+b;
    remember = 0;
    res = "";

    for(int i=a.size()-1; i>=0 ; i--)
    {
        long long digit=(a[i]-'0')+(b[i]-'0')+remember;
        if(digit>9)
            remember=1;
        else
            remember=0;
        res=(char)(digit%10+48)+res;
    }
    if(remember>0)
        res='1'+res;
    return res;
}
int main()
{
    freopen("demfibo.inp","r",stdin);
    freopen("demfibo.out","w",stdout);
    cin>>c>>d;
    string first=sum("0","1");
    string ans=sum("0","1");
    while(check(ans,d)<=0)
    {
        if(check(ans,c)>=0)
            cnt++;
        string x = ans;
        ans = sum(first, ans);
        first = x;
    }
    if(c==1)
        cnt++;
    cout<<cnt;
}
