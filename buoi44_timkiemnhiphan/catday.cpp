#include<bits/stdc++.h>
using namespace std;
long long n,k,res,l,r,mid,ans;
long long a[100001];
bool check(long long length)
{
    res=0;
    for(long long i=1;i<=n;i++)
    {
        res+=(a[i]/length);
    }
    return res>=k;
}
int main()
{
    freopen("catday.inp","r",stdin);
    freopen("catday.out","w",stdout);
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    l=0,r=1e6+1;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(check(mid)==true)
        {
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
    }
    cout<<mid;



}

