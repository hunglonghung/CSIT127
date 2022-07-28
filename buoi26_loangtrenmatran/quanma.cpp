#include <bits/stdc++.h>
using namespace std;
const int maxn=101;
const int step[8][2] = {{-2, -1}, {-2, 1}, {-1,-2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
int n,sta,a[maxn][maxn],mark[maxn][maxn],cntstep[maxn][maxn];
pair<int,int> ma,vua;
void enter()
{
    freopen("quanma.inp","r",stdin);
    freopen("quanma.out","w",stdout);
    cin>>n>>sta;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==3)
            {
                ma.first=i;
                ma.second=j;
            }
            if(a[i][j]==4)
            {
                vua.first=i;
                vua.second=j;
            }
        }

}
bool check(pair < int, int > next)
{
    return (1 <= next.first && next.first <= n && 1 <= next.second && next.second <= n
            && 0<= a[next.first][next.second] <= 2 && mark[next.first][next.second] == 0);
}

void solve(int x1, int y1)
{
    queue < pair < int, int > > chess;
    chess.push(make_pair(x1, y1));
    mark[x1][y1]=1;
    cntstep[x1][y1]=0;
    int res=0;
    while(!chess.empty())
    {
        pair<int,int> cur=chess.front();
        chess.pop();
        if(cur==vua)
        {
            res=cntstep[cur.first][cur.second];
            break;
        }
        for(int i=0;i<=7;i++)
        {
             pair < int, int > next = make_pair(cur.first + step[i][0], cur.second + step[i][1]);
             if(check(next)==true)
            {
                if(a[next.first][next.second]==1)
                {
                    chess.push(next);
                    mark[next.first][next.second] = 1;
                    cntstep[next.first][next.second] = cntstep[cur.first][cur.second] + 1;
                    sta--;
                }
                if(a[next.first][next.second]==2)
                {
                    chess.push(next);
                    mark[next.first][next.second] = 1;
                    cntstep[next.first][next.second] = cntstep[cur.first][cur.second] + 1;
                    sta++;
                }
                else
                {
                    chess.push(next);
                    mark[next.first][next.second] = 1;
                    cntstep[next.first][next.second] = cntstep[cur.first][cur.second] + 1;
                }

            }
        }
    }

    cout<<res;
}
int main()
{
    enter();
    solve(ma.first, ma.second);
    return 0;
}

