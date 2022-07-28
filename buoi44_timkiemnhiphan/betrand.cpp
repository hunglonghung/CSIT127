#include<bits/stdc++.h>
using namespace std;
const long long maxn=6000001;
long long isprime[6000003];
long long l,r,mid,n,res;
void eratosthene(long long maxn)
{
    isprime[1]=1,isprime[0]=1;
    for(long long i=2;i*i<maxn;i++)
        if(isprime[i]==0)
        {
            for(long long j=i*i;j<=maxn;j+=i)
            {
                isprime[j]=1;
            }
        }

}
void setup()
{
    res=0;
    for(long long i=1;i<=maxn;i++)
    {
        if(isprime[i]==0)
        {
            res++;
        }
        isprime[i]=res;
    }
}
int main()
{
    freopen("betrand.inp","r",stdin);
    freopen("betrand.out","w",stdout);
    eratosthene(maxn);
    setup();
    while(cin>>n)
    {
        cout<<isprime[2*n]-isprime[n]<<endl;
    }
}
