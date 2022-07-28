#include<bits/stdc++.h>
using namespace std;
long long n;
long long m[25001];
long long l[25001];
int main()
{
    freopen("cable.inp","r",stdin);
    freopen("cable.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n-1;i++)
    {
        cin>>m[i];
    }
    l[1]=m[1];
    l[2]=m[1]+m[2];
    for(long long i=3;i<=n-1;i++)
    {
        l[i]=min(l[i-1],l[i-2])+m[i];
    }
    cout<<l[n-1];

}
