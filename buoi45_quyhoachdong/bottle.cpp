#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long long dp[100001][3];
long long n;
int main()
{
    freopen("bottle.inp","r",stdin);
    freopen("bottle.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=n;i++)
    {
        dp[i][0]=max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
        dp[i][1]=dp[i-1][0]+a[i];
        dp[i][2]=dp[i-2][0]+a[i]+a[i-1];
    }
    cout<<max(dp[n][0],max(dp[n][1],dp[n][2]));

}
