#include<bits/stdc++.h>
using namespace std;
string a,res,ans;
long long b,nho,s,k;
string multiple(string a,long long b)
{
    nho=0;
    res="";
    for(long long i=a.size()-1;i>=0;i--)
    {
        s=(a[i]-'0')*b+nho;
        nho=s/10;
        res=(char)(s%10+'0')+res;
    }
    if(nho>0)
    {
        while(nho>0)
        {
            res=(char)(nho%10+'0')+res;
            nho/=10;
        }
    }
    return res;
}
int main()
{
    freopen("kdigit.inp","r",stdin);
    freopen("kdigit.out","w",stdout);
    cin>>b>>k;
    ans="1";
    for(int i=1;i<=b;i++)
    {
        ans=multiple(ans,i);
    }
    if(k>ans.size())
        cout<<"-1";
    else
    {
        for(int i=0;i<=k-1;i++)
        {
            cout<<ans[i];
        }
    }


}
