#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
long long a[maxn],sum[maxn];
long long n,res=1e9,k;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for(long long i=0;i<n;i++)
    {
        k=abs((sum[n]-sum[n-i-1])-sum[n-i-1]);
        res=min(res,k);
    }
    cout<<res;
}
