#include<bits/stdc++.h>
using namespace std;
long long n,res=0;
long long dp[1000001];
int main()
{
    freopen("dice.inp","r",stdin);
    freopen("dice.out","w",stdout);
    cin>>n;
    dp[0]=1;
    for(long long i=0;i<=n;i++)
    {
        for(long long j=1;j<=6;j++)
        {
            if(i-j>=0)
            {
                dp[i]=(dp[i]+dp[i-j])%1000000007;
            }

        }
    }
    cout<<dp[n];

}
