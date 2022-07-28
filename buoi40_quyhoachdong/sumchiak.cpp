#include<bits/stdc++.h>
using namespace std;
long long a[10001];
long long m,n,k,t;
long long dp[10001];
int sub(int x, int y)
{
    int ans =(x-y)%k;
    if (ans >= 0)
	return ans;
    else
	return ans + k;
}
int main()
{
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        t+=a[i];
    }
    m=t%k;
    dp[0][j]=0;
    for(i=1;i<=n;i++)
        for(j=0;j<=k-1;j++)
            dp[i][j]=min(dp[i-1][j],dp[i-1][sub(j,a[i])]+1);
    cout<<n-dp[n][m];

}


