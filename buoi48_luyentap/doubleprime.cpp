#include<bits/stdc++.h>
using namespace std;
const long long maxn=1000000;
long long isprime[1000001];
vector<long long>primenum;
vector<long long>doubleprimenum;
long long dp[1001];
long long t,l,r,cnt,lft,rght,mid,maxpos,minpos;
void eratosthene()//sang
{
    isprime[0]=1,isprime[1]=1;
    for(long long i=2;i*i<=maxn;i++)
    {
        if(isprime[i]==0)
            for(long long j=i*i;j<=maxn;j+=i)
                isprime[i]=1;
    }
}
bool check(long long q ,long long p)
{
    if(l/p<=q && q<=r/p)
    {
        return true;
    }
    else return false;
}
void solve()
{
    cnt=0;
    for(long long i=1;i<=primenum.size()-1;i++)
    {
        lft=0;
        rght=i-1;
        while(lft<=rght)
        {
            mid=(lft+rght)/2;
            if(check(primenum[mid],primenum[i])==true)
            {
                rght=mid-1;
                minpos=mid;
            }
            else lft=mid+1;

        }
        lft=0;
        rght=i-1;
        while(lft<=rght)
        {
            mid=(lft+rght)/2;
            if(check(primenum[mid],primenum[i])==true)
            {
                lft=mid+1;
                maxpos=mid;
            }
            else rght=mid-1;

        }
        cnt+=(maxpos-minpos+1);
    }
    cout<<cnt<<endl;

}
int main()
{
    freopen("doubleprime.inp","r",stdin);
    freopen("doubleprime.out","w",stdout);
    eratosthene();
    for(long long i=1;i<=maxn;i++)
    {
        if(isprime[i]==0)
        {
            primenum.push_back(i);//luusnt
        }
    }
    for(long long i=0;i<=primenum.size()-1;i++)
    {
        cout<<primenum[i]<<" ";
    }
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        solve();
    }

}
