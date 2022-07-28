#include<bits/stdc++.h>
using namespace std;
long long m,n,minn=1000000000;
long long mark[3000001];
long long a[3000001];
long long l[3000001];
long long dp[3000001];
int main()
{
    freopen("distinct.inp","r",stdin);
    freopen("distinct.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        minn=min(minn,a[i]);
    }
    for(long long i=1;i<=n;i++)
    {
        a[i]+=abs(minn);
    }
    dp[n]=1;
    mark[a[n]]=1;
    for(long long i=n-1;i>=1;i--)
    {
        if(mark[a[i]]==0)
        {
            dp[i]=dp[i+1]+1;
            mark[a[i]]++;
        }
        else
            dp[i]=dp[i+1];

    }
    for(long long i=1;i<=m;i++)
    {
        cin>>l[i];
        cout<<dp[l[i]]<<endl;
    }
}
