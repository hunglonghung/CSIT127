#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[101];
long long b[101];
long long f[101][101];
int main()
{
    freopen("caykhe1.inp","r",stdin);
    freopen("caykhe1.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        f[i][0]=0;
    }

    for(long long i=1;i<=n;i++)
    {
        for(long long j=0;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            if(j-b[i]>=0)
            {
                f[i][j]=max(f[i][j],f[i-1][j-b[i]]+a[i]);
            }
        }
    }
    cout<<f[n][m];
}
