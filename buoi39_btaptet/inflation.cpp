#include<bits/stdc++.h>
using namespace std;
long long n,k,ntest,l,r,mid,sum,x,y;
long long a[101];
void solve()
{
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    l=0,r=1e14;
    while(l<r)
    {
        mid=(l+r)/2;
        sum=a[1]+mid;
        for(long long i=2;i<=n;i++)
        {
            y=1;
            x=sum*k/100;
            if(a[i]>x)
            {
                y=0;
                break;
            }
            sum+=a[i];
        }
        if(y==1)
            r=mid;
        else l=mid+1;
    }
    cout<<l<<endl;



}
int main()
{
    freopen("inflation.inp","r",stdin);
    freopen("inflation.out","w",stdout);
    cin>>ntest;
    while(ntest--)
    {
        solve();
    }
}
