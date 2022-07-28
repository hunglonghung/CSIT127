#include<bits/stdc++.h>
using namespace std;
string s;
long long dp[5001][5001];
long long n;
int main()
{
    freopen("palin.inp","r",stdin);
    freopen("palin.out","w",stdout);
    cin>>n;
    cin>>s;
    s=' '+s;
    for(long long i=1;i<=n;i++)
        dp[i][i]=0;
    for(long long i=n-1;i>=1;i--)
        for(long long j=i;j<=n;j++)
        {
            if(s[i]==s[j])
                dp[i][j]=dp[i+1][j-1];
            if(s[i]!=s[j])
                dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;
        }
    cout<<dp[1][n];
}
