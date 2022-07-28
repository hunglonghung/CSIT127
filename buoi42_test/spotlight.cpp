#include<bits/stdc++.h>
using namespace std;
long long m,n;
long long a[1001][1001];
long long cnt=0;
int main()
{
    freopen("spotlight.inp","r",stdin);
    freopen("spotlight.out","w",stdout);
    cin>>m>>n;
    for(long long i=1;i<=m;i++)
        for(long long j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
                cnt++;
        }
    cnt*=4;
    for(long long i=1;i<=m;i++)
        for(long long j=1;j<=n;j++)
        {
            if(a[i][j]==0)
            {
                for(long long k=1;k<=m;k++)
                {
                    v=0;
                    if(a[k][n]==1)
                        v=1;
                }
                if(v==0)
                    cnt--;
                for(long long h=1;h<=n;h++)
                {
                    v=0;
                    if(a[m][h]==1)
                        v=1;
                }
                if(v==0)
                    cnt--;
            }
        }
        cout<<cnt;

}
