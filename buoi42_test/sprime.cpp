#include<bits/stdc++.h>
using namespace std;
const long long maxn=3000001;
long long n,ntest,a,b,res,isprime[maxn],cnt[maxn];
void Eratosthene()
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
long long sumdigit(long long k)
{
    res=0;
    while(k>0)
    {
        res+=k%10;
        k/=10;
    }
    return res;
}
int main()
{
    freopen("sprime.inp","r",stdin);
    freopen("sprime.out","w",stdout);
    Eratosthene();
    for(long long i=1;i<=maxn;i++)
    {
        if(isprime[i]==0&&sumdigit(i)%5==0)
            cnt[i]=cnt[i-1]+1;
        else cnt[i]=cnt[i-1];
    }
    cin>>ntest;
    while(ntest--)
    {
        n=0;
        cin>>a>>b;
        cout<<cnt[b]-cnt[a-1];
        cout<<endl;
    }
}
