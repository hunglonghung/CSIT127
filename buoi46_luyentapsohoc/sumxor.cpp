#include<bits/stdc++.h>
using namespace std;
long long n,m,u,v,ans;
long long a[100001];
long long total[100001];
int main()
{
    freopen("sumxor.inp","r",stdin);
    freopen("sumxor.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        total[i]=total[i-1]^a[i];
    }
    cin>>m;
    while(m--)
    {
        cin>>u>>v;
        ans=total[v]^total[u-1];
        cout<<ans<<endl;
    }


}
