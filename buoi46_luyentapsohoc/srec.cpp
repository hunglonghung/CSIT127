#include<bits/stdc++.h>
using namespace std;
long long n,s;
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
    freopen("srec.inp","r",stdin);
    freopen("srec.out","w",stdout);
    cin>>n;
    if(n&1)
    {
        s=powermod(n,2,divider);
        s=(s-1)%divider;
    }
    else
    {
        s=powermod(n,2,divider);
    }
    s=(s*powermod(2,divider-2,divider))%divider;
    cout<<s;
}
