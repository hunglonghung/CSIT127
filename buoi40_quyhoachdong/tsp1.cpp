#include<bits/stdc++.h>
using namespace std;
long long a[101][101];
long long l[101][101];
long long m,n,ans=-100000000000,sum=0;
int main()
{
    freopen("tsp1.inp","r",stdin);
    freopen("tsp1.out","w",stdout);
    cin>>m>>n;
    for(long long i=1;i<=m;i++)
        for(long long j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    for(long long i=1;i<=n;i++)
        l[i][1]=a[i][1];
    if(m=1)
    {
        for(long long i=1;i<=n;i++)
        sum=sum+a[m][i];
    }
    for(long long j=2;j<=n;j++)
        for(long long i=1;i<=m;i++)
        {
            if(1<i&&i<n)
                l[i][j]=max(l[i-1][j-1],max(l[i+1][j-1],l[i][j-1]))+a[i][j];
            if(i==1)
                l[i][j]=max(l[m][j-1],max(l[i+1][j-1],l[i][j-1]))+a[i][j];
            if(i==m)
                l[i][j]=max(l[1][j-1],max(l[i-1][j-1],l[i][j-1]))+a[i][j];
        }
    for(long long i=1;i<=m;i++)
        ans=max(ans,l[i][n]);
    cout<<ans<<endl;
    for(long long i=1;i<=m;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }

}
