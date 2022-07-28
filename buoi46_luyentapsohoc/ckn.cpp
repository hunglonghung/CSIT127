#include<bits/stdc++.h>
using namespace std;
long long n,k,ts=1,ms=1,ans;
long long divider=1000000007;
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
    freopen("ckn.inp","r",stdin);
    freopen("ckn.out","w",stdout);
    cin>>n>>k;
    for(long long i=1;i<=k;i++)
    {
        ts=((ts%divider)*((n-i+1)%divider))%divider;
    }
    for(long long i=1;i<=k;i++)
    {
        ms=((ms%divider)*powermod(i,divider-2,divider))%divider;
    }
    ans=(ts*ms)%divider;
    cout<<ans;

}

