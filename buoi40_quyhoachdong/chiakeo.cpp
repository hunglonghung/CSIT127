#include<bits/stdc++.h>
using namespace std;
long long a[1001],l[1001];
long long n,s,t=0,res;
int main()
{
    freopen("chiakeo.inp","r",stdin);
    freopen("chiakeo.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        t+=a[i];
    }
    s=t;
    t=t/2;
    l[0]=1;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=t;j>=a[i];j--)//phai for nguoc vi l[0]=1;
        {
            if(l[j]==0 && l[j-a[i]]==1)
                l[j]=1;
        }
    }
    for(long long k=t;k>=1;k--)
    {
        if(l[k]==1)
        {
            cout<<s-2*k;
            break;
        }
    }


}
