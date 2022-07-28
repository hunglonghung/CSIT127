#include <bits/stdc++.h>
using namespace std;
const int step[4][2] = {{0,-1}, {0, 1}, {-1, 0}, {1, 0}};
const int maxn = 101;
int m, n, a[maxn][maxn], mark[maxn][maxn];
int cnt=0;;
void enter()
{
    freopen("demdao.inp", "r", stdin);
    freopen("demdao.out", "w", stdout);
    cin >> m >> n ;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }

}
bool check(pair < int, int > next)
{
    return (1 <= next.first && next.first <= m && 1 <= next.second && next.second <= n
            && a[next.first][next.second] == 1 && mark[next.first][next.second] == 0);
}

void solve(pair<int,int>x)
{
    queue < pair < int, int > > dao;
    dao.push(x);
    mark[x.first][x.second] = 1;
    while (!dao.empty())
    {
        pair < int, int > cur = dao.front();
        dao.pop();
        for (int i = 0; i <= 3; ++i)
        {
            pair < int, int > next = make_pair(cur.first + step[i][0], cur.second + step[i][1]);
            if (check(next) == true)
            {
                dao.push(next);
                mark[next.first][next.second] = 1;
            }
        }
    }
    cnt++;
}
int main()
{
    enter();
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] == 1 && 1!=mark[i][j])
            {

                solve(make_pair(i,j));
            }
    cout<<cnt;
}
