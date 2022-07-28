#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[201];
long long dp[201][201];
int main()
{
    freopen("group.inp","r",stdin);
    freopen("group.out","w",stdout);
    cin>>n>>m;
    for(long long i=1; i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(long long i=2;i<=n;i++)
    {
        for(long long j=1;j<=i;j++)
        {
            if(j-1!=0)
                dp[i][j]=min(dp[i-1][j-1],dp[i-1][j]+a[i]-a[i-1]);
            else
                dp[i][j]=a[i]-a[1];
        }
    }
    cout<<dp[n][m];
}

