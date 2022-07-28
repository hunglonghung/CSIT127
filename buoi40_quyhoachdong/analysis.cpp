#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(long long i=1;i<=1000;i++)
        for(long long j=0;j<=1000;i++)
        {
            if(j<i)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-i];
            }
        }
    cin>>n;
    cout<<dp[n][n];
}
