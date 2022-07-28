#include<bits/stdc++.h>
using namespace std;
long long m,n,k,maxn=0,x2,y2;
long long dp[1001][1001];
long long a[1001][1001];
long long sum[1001][1001];
int main()
{
    freopen("matrix.inp","r",stdin);
    freopen("matrix.out","w",stdout);
    cin>>m>>n>>k;
    for(long long i=1;i<=m;i++)
        for(long long j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    for(long long i=1;i<=m;i++)
        for(long long j=1;j<=n;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+a[i][j];
        }
    for(long long x1=1;x1<=m-k+1;x1++)
        for(long long y1=1;y1<=n-k+1;y1++)
        {
            x2=x1+k-1;
            y2=y1+k-1;
            sum[x1][y1]=dp[x2][y2]-dp[x2][y1-1]-dp[x1-1][y2]+dp[x1-1][y1-1];
            maxn=max(maxn,sum[x1][y1]);
        }
    cout<<maxn;


}
