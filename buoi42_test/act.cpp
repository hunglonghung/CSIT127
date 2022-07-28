#include<bits/stdc++.h>
using namespace std;
long long n,t;
long long dp[1000001];
int main()
{
    freopen("act.inp","r",stdin);
    freopen("act.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(long long i=1;i<=n;i++)
        {
            dp[i]=i;
        }
        for (int i = 1; i <= n; ++i)
        {
            if (i >= 1)
                dp[i] = min(dp[i], dp[i - 1] + 1);

            if (i >= 3)
                dp[i] = min(dp[i], dp[i - 3] + 1);

            if (i >= 5)
                dp[i] = min(dp[i], dp[i - 5] + 2);

            if (i >= 10)
                dp[i] = min(dp[i], dp[i - 10] + 1);

            if (i >= 15)
                dp[i] = min(dp[i], dp[i - 15] + 2);

            if (i >= 19)
                dp[i] = min(dp[i], dp[i - 19] + 3);
        }
        cout<<dp[n]<<endl;
    }
}




