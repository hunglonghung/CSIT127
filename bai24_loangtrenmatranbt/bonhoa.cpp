#include <bits/stdc++.h>

using namespace std;
const int step[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
const int maxn = 101;
int m, n, a[maxn][maxn], mark[maxn][maxn];
int s,c;

void enter()
{
    freopen("bonhoa.inp", "r", stdin);
    freopen("bonhoa.out", "w", stdout);
    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
}
bool check(pair < int, int > next)
{
    return (1 <= next.first && next.first <= m && 1 <= next.second && next.second <= n
            && a[next.first][next.second] == 1 && mark[next.first][next.second] == 0);
}
void solve(pair<int,int> x)
{
    queue <pair<int,int>> hoa;
    mark[x.first][x.second]=1;
    hoa.push(x);
    s=0;
    c=0;
    while(!hoa.empty())
    {
        pair<int,int> cur=hoa.front();
        s++;
        hoa.pop();
        for(int i=0;i<=3;i++)
        {
            pair<int,int>next=make_pair(cur.first+ step[i][0],cur.second+step[i][1]);
            if(a[next.first][next.second]==0)
                c++;
            if(check(next)==true)
            {
                mark[next.first][next.second]=1;
                hoa.push(next);
            }
        }
    }
}
int main()
{
    enter();
    int maxs = 0, maxc = 0;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] == 1 && 1!=mark[i][j])
            {

                solve(make_pair(i,j));
                maxs=max(maxs,s);
                maxc=max(maxc,c);


            }
    cout << maxs << endl << maxc;
    return 0;
}
