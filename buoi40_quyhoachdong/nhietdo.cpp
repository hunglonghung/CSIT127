#include<bits/stdc++.h>
using namespace std;
long long n,res;
long long a[10001];
long long dp[10001];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp[1]=a[2]-a[1];
    for(long long i=2;i<=n-1;i++)
    {
        for(long long j=1;j<=i-1;j++)
        {
            res=max(dp[j],abs(a[i+1]-a[j]));
            dp[i]=min(dp[i],res);
        }
    }
    cout<<dp[n-1];
}
