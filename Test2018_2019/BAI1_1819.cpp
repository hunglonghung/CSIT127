#include<bits/stdc++.h>
using namespace std;
long long isprime[100001];
const long long maxn=1000001;
long long t,n,pos,cntl,cntr,i,res,ans;
vector<long long>primenum;
void eratosthene()
{
    isprime[0]=1;
    isprime[1]=1;
    for(long long i=2;i*i<=maxn;i++)
    {
        if(isprime[i]==0)
        {
            for(long long j=i*i;j*j<=maxn;j+=i)
            {
                isprime[j]=1;
            }
        }
    }
}
void solve()
{
    primenum.clear();
    cntl=0;
    cntr=0;
    pos=cbrt(n);
    i=pos;
    ans=0;
    while(cntl<3 && i>0)
    {
        if(isprime[i]==0)
        {
            cntl++;
            primenum.push_back(i);
        }
        i--;

    }
    i=pos;
    while(cntr<2)
    {
        if(isprime[i]==0)
        {
            cntr++;
            primenum.push_back(i);
        }
        i++;
    }
    sort(primenum.begin(),primenum.end());
    for(long long i=0;i<=primenum.size()-2;i++)
    {
        if(primenum[i]==primenum[i+1])
            primenum.erase(primenum.begin()+i);
    }
    for(long long i=0;i<=primenum.size()-1;i++)
    {
        cout<<primenum[i]<<" ";
    }
    for(long long i=0;i<=primenum.size()-3;i++)
    {
        res=primenum[i]*primenum[i+1]*primenum[i+2];
        if(res>ans&&res<=n)
            ans=res;
    }
    cout<<ans;
}
int main()
{
    freopen("BAI1_1819.inp","r",stdin);
    freopen("BAI1_1819.out","w",stdout);
    eratosthene();
    cin>>t;
    while(t--)
    {
        cin>>n;
        solve();
    }
}
