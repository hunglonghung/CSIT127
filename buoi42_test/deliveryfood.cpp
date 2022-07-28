#include<bits/stdc++.h>
using namespace std;
long long t,onfoot,n,delivery;
pair<long long,long long> a[20001];
int main()
{
    freopen("deliveryfood.inp","r",stdin);
    freopen("deliveryfood.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        onfoot=0;
        for(long long i=1;i<=n;i++)
        {
            cin>>a[i].first;
        }
        for(long long i=1;i<=n;i++)
        {
            cin>>a[i].second;
        }
        sort(a+1,a+1+n);
        for(long long i=n;i>=1;i--)
        {
            if(onfoot+a[i].second<=a[i].first)
            {
                onfoot+=a[i].second;
                delivery=a[i-1].first;
            }
            else
                break;
        }
        cout<<min(onfoot,delivery)<<endl;

    }
}
