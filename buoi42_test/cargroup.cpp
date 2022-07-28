#include <bits/stdc++.h>
#define task "CARGROUP."
#define inf 1e9 + 7

using namespace std;
const int maxn = 1001;
pair < int, double > car[maxn];
double L, dp[maxn];
int n, P, trace[maxn];

void enter()
{
    freopen("cargroup.inp","r",stdin);
    freopen("cargroup.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> P >> L;
    for (int i = 1; i <= n; ++i)
        cin >> car[i].first >> car[i].second;
}

void solve()
{
    for (int i = 1; i <= n; ++i)
    {
        // Ban dau ca nhom chua co xe nao, chuan bi them tiep xe thu i vao nhom
        int totalWeight = 0;
        double groupTime = 0;
        dp[i] = 1e15;

        // Lan luot them cac xe thu i, i - 1, i - 2,..., 1 vao nhom hien tai
        for (int j = i; j >= 1; --j)
        {
            totalWeight += car[j].first; // Trong luong nhom tang them trong luong cua xe thu j
            if (totalWeight > P) break; // Neu trong luong nhom > tai trong P cua cay cau thi ket thuc nhom nay
            if (groupTime < L / car[j].second)
                groupTime = L / car[j].second; // Cap nhat thoi gian qua cau cua nhom hien tai sau khi them xe j
            if (dp[i] > dp[j - 1] + groupTime) // Toi uu hoa dp[i] voi thong so moi cua nhom hien tai
            {
                dp[i] = dp[j - 1] + groupTime;
                trace[i] = j - 1; // Luu vet phan tu cuoi cung duoc chon cua nhom lien truoc nhom hien tai
            }
        }
    }

    cout << fixed << setprecision(2) << dp[n] << endl;

    vector < int > group;
    while (n > 0)
    {
        group.push_back(n);
        n = trace[n];
    }
    for (int i = group.size() - 1; i >= 0; --i)
        cout << group[i] << ' ';
}

int main()
{
    enter();
    solve();
    return 0;
}
