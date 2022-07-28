#include<bits/stdc++.h>
using namespace std;
long long a[1001][1001];
long long maxnum[1001][1001];
long long n,m;
int main()
{
    freopen("game1.inp","r",stdin);
    freopen("game1.out","w",stdout);
    cin>>m>>n;
    for(long long i=1;i<=m;i++)
        for(long long j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    maxnum[m][n]=a[m][n];
    for(long long i=n-1;i>=1;i--)
    {
        maxnum[m][i]=maxnum[m][i+1]+a[m][i];
    }
    for(long long i=m-1;i>=1;i--)
    {
        maxnum[i][n]=maxnum[i+1][n]+a[i][n];
    }
    for(long long i=m-1;i>=1;i--)
        for(long long j=n-1;j>=1;j--)
        {
            maxnum[i][j]=max(maxnum[i+1][j],maxnum[i][j+1])+a[i][j];
        }
    //for(long long i=1;i<=m;i++)
    //{
      //  for(long long j=1;j<=n;j++)
        //{
          //  cout<<maxnum[i][j]<<" ";
        //}
        //cout<<endl;
    //}

    cout<<maxnum[1][1];
}
