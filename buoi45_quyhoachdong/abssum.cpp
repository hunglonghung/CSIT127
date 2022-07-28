#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long long n;
long long dp1[100001];
long long dp2[100001];
int main()
{
    freopen("abssum.inp","r",stdin);
    freopen("abssum.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        dp1[i]=max(dp1[i-1]+a[i],a[i]);
    }
    for(long long i=1;i<=n;i++)
    {
        dp2[i]=min(dp2[i-1]+a[i],a[i]);
    }
    cout<<max(*max_element(dp1+1,dp1+1+n),abs(*min_element(dp2+1,dp2+1+n)));

}
