#include<bits/stdc++.h>
using namespace std;
long long n;
pair<long long, long long> a[100001];
long long l[100001];
int main()
{
    freopen("ticket.inp","r",stdin);
    freopen("ticket.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    l[0]=0;
    l[1]=min(a[1].first,a[1].second);
    for(long long i=2 ;i<=n;i++)
    {
       l[i]  = min(l[i-1] + a[i].first, l[i-2]+a[i].second);
    }
    cout<<l[n];
}
