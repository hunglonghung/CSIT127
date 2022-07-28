#include<bits/stdc++.h>
using namespace std;
long long n,l,u;
long long a[10001];
long long dp1[10001];
long long dp2[10001];
int main()
{
    freopen("daycondoidau.inp","r",stdin);
    freopen("daycondoidau.out","w",stdout);

    cin>>n>>l>>u;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        dp1[i]=1;
        dp2[i]=1;
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=0;j<=i-1;i++)
        {
            if(a[i]-a[j]>=u&& i-j>=l)
                dp1[i]=*max_element(dp2+1,dp2+1+j)+1;
            if(a[j]-a[i]>=u&&i-j>=1)
                dp2[i]=*max_element(dp1+1,dp1+1+j)+1;
        }
    }
    cout<<max(*max_element(dp1+1,dp1+1+n),*max_element(dp2+1,dp2+1+n));

}

