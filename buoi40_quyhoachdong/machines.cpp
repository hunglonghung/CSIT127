#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> a[1001];
long long b[1001];
long long l[1001];
long long n,jmax;
int main()
{
    freopen("machines.inp","r",stdin);
    freopen("machines.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i].first>>b[i];
        a[i].second=a[i].first+b[i];
        a[i].first-=b[i];
    }
    sort(a+1,a+1+n);
    l[1]=1;
    for(long long i=2;i<=n;i++)
    {
        jmax=0;
        for(long long j=1;j<=i-1;j++)
        {
            if(a[j].second<a[i].first && l[j]>jmax)
            {
                jmax=l[j];
            }
        }
        l[i]=jmax+1;
    }
    sort(l+1,l+1+n);
    cout<<l[n];



}
