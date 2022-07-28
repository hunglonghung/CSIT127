#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> a[5001];
long long l[5001];
long long n,jmax,cnt;
int main()
{
    freopen("room.inp","r",stdin);
    freopen("room.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a+1,a+1+n);
    l[1]=1;
    for(long long i=2;i<=n;i++)
    {
        jmax=0;
        for(long long j=1;j<=i-1;j++)
        {
            if(a[j].second<=a[i].first && l[j]>=jmax)
            {
                jmax=l[j];
            }
        }
        l[i]=jmax+1;
    }
    sort(l+1,l+1+n);
    cout<<l[n];

}
