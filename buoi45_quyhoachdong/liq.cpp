#include<bits/stdc++.h>
using namespace std;
long long endp[100001];
long long a[100001];
long long trace[100001];
long long dp[100001];
vector<long long> C;
long long n,maxl,l,r,mid,maxn;
int main()
{
    freopen("liq.inp","r",stdin);
    freopen("liq.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    maxl=1;
    endp[1]=1;
    dp[1]=1;
    for(long long i=2;i<=n;i++)
    {
        if(a[i]>a[endp[maxl]])
        {
            maxl++;
            endp[maxl]=i;
            trace[i]=endp[maxl-1];
            dp[i]=maxl;
        }
        else
        {
            int ans = 0;
            l=1,r=maxl;
            while(l<=r)
            {
                mid=(l+r)/2;

                if(a[i]>a[endp[mid]])
                {
                    ans=mid;
                    l=mid+1;
                }
                else
                    r=mid-1;
            }
            if(a[i]<a[endp[ans+1]])
                endp[ans+1]=i;
            trace[i]=endp[ans];
            dp[i]=ans+1;
        }
    }
    maxn=1;
    for(long long i=1;i<=n;i++)
    {

        if(dp[maxn]<dp[i])
            maxn=i;
    }
    cout<<dp[maxn]<<endl;
    while(maxn!=0)
    {
        C.push_back(a[maxn]);
        maxn=trace[maxn];
    }
    for(long long i=C.size()-1;i>=0;i--)
    {
        cout<<C[i]<<' ';
    }
}
