#include<bits/stdc++.h>
using namespace std;
long long maxn=1000000007;
long long t,n,res,ans,finalans;
long long a[100001];
long long powermod(long long a,long long b, long long m)
{
    if(b==0)
        return 1;
    long long t=powermod(a,b/2,m)%m;
    if(b%2==0)
        return(t*t)%m;
    else return ((t*t)%m*(a%m))%m;
}
int main()
{
    freopen("magicnumber.inp","r",stdin);
    freopen("magicnumber.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(long long i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        res=a[1];
        for(long long i=2;i<=n;i++)
        {
            res=__gcd(res,a[i]);
        }
        ans=a[1]%maxn;
        for(long long i=2;i<=n;i++)
        {
            ans=(ans*a[i]%maxn)%maxn;
        }
        finalans=powermod(ans,res,maxn);
        cout<<finalans<<endl;
    }

}
