#include<bits/stdc++.h>
using namespace std;
long long n,m,j,mid,l,r,ans;
long long a[100001];
long long b[100001];
vector<pair<long long,long long>> c;
bool check(long long x)
{
    j = 1;
    for(long long i=1;i<=n;i++)
        if(a[i]<x)
        {
            while(j<=m && a[i]+b[j]<x)
                j++;
            if(j>m)
                return false;
            j++;
        }
    return true;
}
void truyvet(long long ans)
{
    j=1;
    for(long long i=1;i<=n;i++)
    {
        if(a[i]<ans)
        {
            while(j<=m && a[i]+b[j]<ans)
            {
                j++;
            }
            c.push_back(make_pair(i,j));
            j++;
        }
    }
    cout<<c.size()<<endl;
    for(long long i=0;i<c.size();i++)
    {
        cout<<c[i].first<<" "<<c[i].second<<endl;
    }
}
int main()
{
    freopen("wall.inp","r",stdin);
    freopen("wall.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    l=0,r=1e14;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(check(mid)==true)
        {
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;

    }

    cout<<ans<<" ";
    truyvet(ans);
}
