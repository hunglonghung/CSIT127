#include <bits/stdc++.h>
using namespace std;
const int step[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
const int nextstep[8][2]= {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
int m, n, mark[101][101];
char a[101][101];
int cnt=0;
pair < int, int > des;
void enter()
{
    freopen("catco.inp", "r", stdin);
    freopen("catco.out", "w", stdout);
    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            if(a[i][j]=='M')
            {
                des.first=i;
                des.second=j;
            }
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout<< a[i][j]<<" ";

        }
        cout<<endl ;
    }
}
bool check(pair < int, int > next)
{
    return (1 <= next.first && next.first <= m && 1 <= next.second && next.second <= n
            && a[next.first][next.second] == '.' );
}
int kiemtra(pair<int,int> next1)
{

    if(1 <= next1.first && next1.first <= m && 1 <= next1.second && next1.second <= n
            && a[next1.first][next1.second] == '.')
                cnt++;
}
void solve(int startX, int startY)
{

    queue < pair < int, int > > gar;
    gar.push(make_pair(startX, startY));
    mark[startX][startY] = 1;
    int res = 0;
    while (!gar.empty())
    {
        pair < int, int > cur = gar.front();
        gar.pop();
        for (int i = 0; i <= 3; ++i)
            for(int j=0; j<= 7; j++)
            {
                pair < int, int > next = make_pair(cur.first + step[i][0], cur.second + step[i][1]);
                pair < int, int > next1 = make_pair(next.first + nextstep[j][0], next.second + nextstep[j][1]);
                if(check(next)==true&&kiemtra(next1)==8)
                {
                    gar.push(next);
                    mark[next.first][next.second] = 1;
                    mark[next1.first][next1.second] = 1;
                }

            }
    }
}
int main()
{
    int res=0;
    enter();
    solve(des.first, des.second);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            res+=mark[i][j];
            cout<<mark[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<res;
    return 0;
}

