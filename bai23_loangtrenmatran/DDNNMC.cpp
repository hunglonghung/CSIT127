#include<bits/stdc++.h>
using namespace std;
const int maxn=101;
int m,n,x,y,A[maxn][maxn],mark[maxn][maxn];
int step[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
void enter()
{
    freopen("DDNNMC.inp","r",stdin);
    freopen("DDNNMC.out","w",stdout);
    cin>>m>>n;
    cin>>x>>y;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> A[i][j];
}
bool check(pair < int, int > next)
{
    return (1 <= next.first && next.first <= m && 1 <= next.second && next.second <= n && A[next.first][next.second] == 0 && mark[next.first][next.second] == 0);
}
void solve(int x,int y)
{
    int res=-1;
    queue<pair<int,int>> route;
    route.push(make_pair(x,y));
    mark[x][y]=1;
    step[x][y]=0;
    while(!route.empty())
    {
        pair<int,int>pos=route.front();
        route.pop();
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                if(mark[1][m]==0||mark[m][1]==0||mark[1][n]==0||mark[n][1]==0)
                {
                    res=step[pos.first][pos.second];
                    cout<<res;
                }
    }
    for(int i=0;i<=3;i++)
    {
        pair<int,int>next=make_pair(step[i][0],step[i][1]);
        if (check(next)==0)
        mark[next.first][next.second]=1;
        step[next.first][next.second]=step[pos.first][pos.second]+1;

    }
}
int main()
{
    enter();
    solve(x,y);
}
