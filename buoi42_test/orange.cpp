#include<bits/stdc++.h>
using namespace std;
long long p[100001];
long long cnt[100001];
long long N;
int main()
{
    freopen("orange.inp","r",stdin);
    freopen("orange.out","w",stdout);
    cin >> N;
    for (int i = 1; i <= N; ++i)
        cin >> p[i];
    sort(p + 1, p + 1 + N);
    long long maximumMoney = 0;
    p[N + 1] = p[N] + 1;

    for (int i = N; i >= 1; --i)
    {
        if (p[i] != p[i + 1])
            maximumMoney = max(maximumMoney, p[i] * (N - i + 1));
        else
            maximumMoney = max(maximumMoney, (p[i] - 1) * (N - i + 1));
    }
    cout<<maximumMoney;

}
