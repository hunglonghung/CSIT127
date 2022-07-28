#include <bits/stdc++.h>
using namespace std;
vector < long long > adj[501];
long long u,v,n,m;
int main()
{
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=0;j<=adj[i].size()-1;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}
