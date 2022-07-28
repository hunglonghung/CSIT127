#include<bits/stdc++.h>
using namespace std;
long long sum[100001];
long long sumb[100001];
long long a[100001];
long long dp1[100001];
long long dp2[100001];
long long n,t1,t2,cnt=1,res=-1000000001;
int main()
{
    freopen("dseq.inp","r",stdin);
    freopen("dseq.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    sumb[n]=a[n];
    for(long long i=n-1;i>=1;i--)
    {
        sumb[i]=sumb[i+1]+a[i];
    }
    dp1[n]=a[n];
    for(long long i=n-1;i>=1;i--)
    {
        dp1[i]=max(sumb[i],dp1[i+1]);
    }
    dp2[n]=a[n];
    for(long long i=n-1;i>=1;i--)
    {
        dp2[i]=min(dp2[i+1],sumb[i]);
    }
    for(long long i=1;i<=n;i++)
    {
        t1=abs(sum[i]-dp1[i]);
        t2=abs(sum[i]-dp2[i]);
        if(res<max(t1,t2))
        {
            res=max(t1,t2);
            cnt=1;
        }
        else
            if(res==max(t1,t2))
                cnt++;
    }
    cout<<res<<" "<<cnt;

}
