#include<bits/stdc++.h>
using namespace std;
long long n,isprime[1000001],cnt;
void enter()
{
    freopen("countpairs.inp","r",stdin);
    freopen("countpairs.out","w",stdout);
    cin>>n;
}
void solve()
{
    cnt=0;
    for(long long i=1;i<=n;i++)
    {
        cnt+=n/i;
    }
    cout<<cnt;
}
int main()
{
    enter();
    solve();
}
