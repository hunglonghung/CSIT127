#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
long long curh[1000001];
long long n,res;
int main()
{
    freopen("minarrows.inp","r",stdin);
    freopen("minarrows.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    curh[1]=1;
    for(long long i=1;i<=n;i++)
    {
        if(curh[a[i]]==0)
        {
            res++;
            curh[a[i]-1]++;
        }
        if(curh[a[i]]==1)
        {
            curh[a[i]-1]++;
            curh[a[i]]--;
        }
    }
    cout<<res;

}
