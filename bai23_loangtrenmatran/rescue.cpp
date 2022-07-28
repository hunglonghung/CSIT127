#include <bits/stdc++.h>

using namespace std;
const int step[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
const int maxn = 101;
int m, n, a[maxn][maxn], cntStep[maxn][maxn], mark[maxn][maxn];
pair < int, int > des, trace[maxn][maxn];

void enter()
{
    freopen("rescue.inp", "r", stdin);
    freopen("rescue.out", "w", stdout);
    cin >> m >> n >> des.first >> des.second;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
}

bool check(pair < int, int > next)
{
    return (1 <= next.first && next.first <= m && 1 <= next.second && next.second <= n
            && a[next.first][next.second] == 0 && mark[next.first][next.second] == 0);
}

void solve(int startX, int startY)
{

    queue < pair < int, int > > room;
    room.push(make_pair(startX, startY));
    mark[startX][startY] = 1;
    cntStep[startX][startY] = 1;
    int res = -1;

    while (!room.empty())
    {
        pair < int, int > cur = room.front();
        room.pop();
        if (cur == des)
        {
            res = cntStep[cur.first][cur.second];
            break;
        }
        for (int i = 0; i <= 7; ++i)
        {
            pair < int, int > next = make_pair(cur.first + step[i][0], cur.second + step[i][1]);
            if (check(next) == true)
            {
                room.push(next);
                mark[next.first][next.second] = 1;
                cntStep[next.first][next.second] = cntStep[cur.first][cur.second] + 1;
                trace[next.first][next.second] = cur;
            }
        }
    }


    cout << res << endl;
    if (res != -1)
    {
        vector < pair < int, int > > journey;
        while (des.first != 0 && des.second != 0)
        {
            journey.push_back(des);
            des = trace[des.first][des.second];
        }

        for (int i = journey.size() - 1; i >= 0; --i)
            cout << journey[i].first << ' ' << journey[i].second << endl;
    }
}

int main()
{
    enter();
    solve(1, 1);
    return 0;
}


