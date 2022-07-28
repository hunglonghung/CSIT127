#include<bits/stdc++.h>
using namespace std;
long long n,l1,l2,l3,c1,c2,c3,s,t;
long long a[10001];
long long dp[10001];
int main()
{
    freopen("rticket.inp","r",stdin);
    freopen("rticket.out","w",stdout);
    cin>>l1>>l2>>l3>>c1>>c2>>c3;
    cin>>n;
    cin>>s>>t;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    dp[s]=0;
    if(s<t)
    {
        for(long long i=s; i<=t; i++)
        {
            dp[i]=LLONG_MAX;
            for(long long j=s;j<=i-1;j++)
            {
                if(a[i]-a[j]>0 && a[i]-a[j]<=l1)
                {
                    dp[i]=min(dp[j]+c1,dp[i]);
                }
                if(a[i]-a[j]<=l2&& a[i]-a[j]>=l1)
                {
                    dp[i]=min(dp[j]+c2,dp[i]);
                }
                if(a[i]-a[j]<=l3 && a[i]-a[j]>=l2)
                {
                    dp[i]=min(dp[j]+c3,dp[i]);
                }
            }
        }
    }
    if(s>t)
    {
        for(long long i=s; i>=t; i--)
        {
            dp[i]=LLONG_MAX;
            for(long long j=s;j>=i+1;j--)
            {
                if(a[j]-a[i]>0 && a[j]-a[i]<=l1)
                {
                    dp[i]=min(dp[j]+c1,dp[i]);
                }
                if(a[j]-a[i]<=l2 && a[j]-a[i]>=l1)
                {
                    dp[i]=min(dp[j]+c2,dp[i]);
                }
                if(a[j]-a[i]<=l3 && a[j]-a[i]>=l2)
                {
                    dp[i]=min(dp[j]+c3,dp[i]);
                }
            }
        }
    }
    cout<<dp[t];

}
