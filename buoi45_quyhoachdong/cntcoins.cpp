#include<bits/stdc++.h>
using namespace std;
long long n,m,mod=1000000001;
long long c[101];
long long dp[10001][10001];
int main()
{
    freopen("cntcoins.inp","r",stdin);
    freopen("cntcoins.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
        cin>>c[i];
    sort(c+1,c+1+n);
    dp[0][0]=1;
     for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= m; ++j)
        {
            dp[i][j] = dp[i - 1][j];

            if (j - c[i] >= 0)
                dp[i][j] = (dp[i][j] + dp[i][j - c[i]]) % mod;
        }

    cout << dp[n][m];
}
