#include<bits/stdc++.h>
using namespace std;
const long long maxn=1000000;
long long n,x,y;
long long a[100001];
long long isprime[1000001];
long long mark[1000101];
long long u,maxnum=0,cnt=0;
void eratosthene()
{
    isprime[0]=isprime[1]=1;
    for(int i=2;i*i<=maxn;i++)
        if(isprime[i]==0)
        {
            for(int j=i*i;j<=maxn;j+=i)
            {
                isprime[j]=1;

            }
        }
}
int main()
{
    freopen("BAI1_1617.inp","r",stdin);
    freopen("BAI1_1617.out","w",stdout);
    eratosthene();
    cin>>n>>x>>y;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        maxnum=max(maxnum,a[i]);
        mark[a[i]]++;
    }
    u=x;
    while(u<maxnum)
    {
        if(isprime[u]==0 && mark[u]>=1)
            cnt++;
        u+=y;
    }
    if(u>=maxnum)
        if(isprime[u]==0 && mark[u]>=1)
            cnt++;
    cout<<cnt;
}
