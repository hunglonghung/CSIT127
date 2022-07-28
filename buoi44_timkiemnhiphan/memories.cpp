#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
long long n, k;
long long a[maxn], sum[maxn];

void enter()
{
    freopen("memories.inp", "r", stdin);
    freopen("memories.out", "w", stdout);
    cin>>n>>k;

    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i] = sum[i - 1] + a[i];
    }
}
//solution:
//giả sử mỗi tập sau khi chia có số trang=X(1)
//có thể giảm x xuống(số tập tăng) nhưng số trang giảm
bool check(long long val)
{
    long long i = 1,sumpages = 0,cntchaps = 0;
    while(i <= n)
    {
        if(a[i] > val)
            return false;
        while(i <= n && sumpages+a[i] <= val)
        {
            sumpages += a[i];
            i++;
        }
        cntchaps++;
        sumpages=0;
    }
    return(cntchaps<=k);

}
void solve()
{
    long long l = 0, r = sum[n], res = 0;
    while (l <= r)
    {
        long long mid = (l + r) /2;
        if (check(mid))
        {
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout<<res;
}
int main()
{
    enter();
    solve();
    return 0;
}


