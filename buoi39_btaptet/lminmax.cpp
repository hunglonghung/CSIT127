#include <bits/stdc++.h>
using namespace std;
int a[1000000+1], n, k,ans ,start;
deque<int>qmax,qmin;
int main()
{
    freopen("lminmax.inp", "r", stdin);
    freopen("lminmax.out", "w", stdout);
    cin >> n >> k;
    for (int i=1;i<= n;++i)
        cin >> a[i];
    ans = 0, start = 1;
    for (int i = 1; i <= n; ++i)
    {
        while ((!qmax.empty()) && (a[qmax.back()] < a[i]))
            qmax.pop_back();
        qmax.push_back(i);
        while ((!qmin.empty()) && (a[qmin.back()] > a[i]))
            qmin.pop_back();
        qmin.push_back(i);
        while (a[qmax.front()] - a[qmin.front()] > k)
        {
            if (qmax.front() > qmin.front())
            {
                start = qmin.front() + 1;
                qmin.pop_front();
            }
            else
            {
                start = qmax.front() + 1;
                qmax.pop_front();
            }
        }
        ans = max(ans, i - start + 1);
    }
    cout << ans;
}
