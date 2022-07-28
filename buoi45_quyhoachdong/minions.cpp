#include<bits/stdc++.h>
using namespace std;
long long t,n,l,r,mid,pleft,pright,ansl,ansr,pre;
long long dp[100001];
long long s[100001];
long long sum[100001];
long long findl(long long j)
{
    ansl=-1;
    if(j<=2)
        return ansl;
    l=1;
    r=j-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(s[j]>=sum[j-1]-sum[mid])
        {
            r=mid-1;
            ansl=mid;
        }
        else l=mid+1;
    }
    return ansl;

}
long long findr(long long j)
{
    ansr=-1;
    if(j>=n-1)
        return ansr;
    l=j+1;
    r=n-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(s[j]>=sum[mid]-sum[j])
        {
            l=mid+1;
            ansr=mid;
        }
        else r=mid-1;
    }
    return ansr+1;
}
int main()
{
    freopen("minions.inp","r",stdin);
    freopen("minions.out","w",stdout);
    cin>>t;
    while(t--)
    {
        for(long long i=0;i<=n;i++)
        {
            dp[i]=0;
        }
        cin>>n;
        for(long long i=1;i<=n;i++)
        {
            cin>>s[i];
            sum[i]=sum[i-1]+s[i];
        }
        for(long long j=1;j<=n;j++)
        {
            pleft=findl(j);
            pright=findr(j);
            if(pleft!=-1)
            {
                dp[pleft]++;
                dp[j]--;
            }
            if(pright!=-1)
            {
                dp[pright+1]--;
                dp[j+1]++;
            }

        }
        for(long long i=1;i<=n;i++)
        {
            dp[i]+=dp[i-1];
        }
        for(long long i=1;i<=n;i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;

    }
}
