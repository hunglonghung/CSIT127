#include<bits/stdc++.h>
using namespace std;
long long n,ans;
long long a[101];
int main()
{
    freopen("remain.inp","r",stdin);
    freopen("remain.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(long long i=1;i<=n-1;i++)
    {
        a[i]=a[i+1]-a[i];
    }
    ans=a[1];
    for(long long i=2;i<=n-1;i++)
    {
        ans=__gcd(ans,a[i]);
    }
    cout<<ans;
}
