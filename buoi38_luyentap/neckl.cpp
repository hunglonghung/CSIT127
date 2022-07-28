#include<bits/stdc++.h>
using namespace std;
string s,xaucon;
char x;
long long res,product,maxn=0,minn=1000000001,k;
long long convert(string s)
{
    res=0;
    product=1;
    for(long long i=s.size()-1;i>=0;i--)
    {
        res+=product*(s[i]-'0');
        product*=2;
    }
    return res;
}
string chuyendoixau1(string s)
{
    string xau1=s;
    for(long long i=0;i<=s.size()-1;i++)
    {
        if(xau1[i]=='B')
            xau1[i]='1';
        else
            xau1[i]='0';
    }
    return xau1;
}
string chuyendoixau2(string s)
{
    string xau2=s;
    for(long long i=0;i<=s.size()-1;i++)
    {
        if(xau2[i]=='B')
            xau2[i]='0';
        else
            xau2[i]='1';
    }
    return xau2;
}
int main()
{
    freopen("neckl.inp","r",stdin);
    freopen("neckl.out","w",stdout);
    ios_base::sync_with_stdio();
    cin.tie(0);cout.tie(0);
    cin>>s;
    k=s.size();
    s=s+s;
    for(long long i=0;i<=k-1;i++)
    {
        xaucon=s.substr(i,k);
        //cout<<xaucon<<" "<<chuyendoixau1(xaucon)<<" "<<chuyendoixau2(xaucon)<<endl;
        maxn=max(maxn,max(convert(chuyendoixau1(xaucon)),convert(chuyendoixau2(xaucon))));
        minn=min(minn,min(convert(chuyendoixau1(xaucon)),convert(chuyendoixau2(xaucon))));
    }
    cout<<minn<<" "<<maxn;

}
