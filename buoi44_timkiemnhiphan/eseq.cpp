#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long long sumf[100001];
pair<long long,long long> sumb[100001];
long long n,l,r,mid,res,minpos,maxpos,ans;
int main()
{
    freopen("eseq.inp","r",stdin);
    freopen("eseq.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        sumf[i]=sumf[i-1]+a[i];
    }
    sumb[n].first=a[n];
    sumb[n].second=n;
    for(long long i=n-1;i>=1;i--)
    {
        sumb[i].first=sumb[i+1].first+a[i];
        sumb[i].second=i;
    }
    sort(sumb+1, sumb+1+n);
    for(long long i=1;i<=n;i++)
    {
        l=1,r=n,maxpos=0,minpos=1e9+1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(sumb[mid].first<=sumf[i])
            {
                if(sumb[mid].first==sumf[i])
                    maxpos=max(maxpos,mid);
                l=mid+1;
            }
            else r=mid-1;
        }
        l=1,r=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(sumb[mid].first>=sumf[i])
            {
                if(sumb[mid].first==sumf[i])
                    minpos=min(minpos,mid);
                r=mid-1;
            }
            else l=mid+1;
        }
        if(minpos>0 && maxpos>0)
        {
            l=minpos,r=maxpos;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(sumb[mid].second>i)
                {
                    r=mid-1;
                    ans=mid;
                }
                else l=mid+1;
            }
            res+=(maxpos-ans+1);
        }

    }
    cout<<res;

}
