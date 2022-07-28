#include<bits/stdc++.h>
using namespace std;
const long long maxn = 1e5 + 10;
const double eps = 0.000001;
long long n, k, minpos[maxn];
double a[maxn];
pair < double, long long > sum[maxn];

void enter()
{
    cin >> n >> k;

    for (long long i = 1; i <= n; i++)
        cin >> a[i];
}

bool check(double val)
{
    for (long long i = 1; i <= n; ++i)
    {
        a[i] -= val;
        sum[i] = {sum[i - 1].first + a[i], i};
        a[i] += val;
    }
    sort(sum + 1, sum + 1 + n);

    for (int i = 1; i <= n; ++i)
    {
        if (sum[i].first >= 0 && sum[i].second >= k)
            return true;

        if (i > 1 && sum[i].second - minpos[i - 1] >= k)
            return true;

        if (i == 1)
            minpos[i]=sum[i].second;
        else
            minpos[i]=min(minpos[i - 1], sum[i].second);
    }

    return false;
}

/* Solution:
   - Nhận xét: Nếu tồn tại một đoạn con có độ dài M với trung bình cộng >= X thì cũng sẽ tồn tại đoạn con với độ dài M
   có trung bình cộng >= (X - 1). Ta sẽ tìm kiếm nhị phân giá trị X lớn nhất.
   - Với một giá trị trung bình X, đặt a[i] = a[i] - X. Lúc này, bài toán trở thành xác định có tồn tại đoạn con nào có
   độ dài >= K và tổng >= 0 hay không. Nếu có thì tăng X lên, ngược lại giảm X xuống. Lưu ý X ở đây là số thực, do đó
   ta cần tìm kiếm nhị phân dựa trên một giá trị epsilon.
   - Bài toán tìm đoạn con có tổng >= 0 và độ dài >= K là bài toán cơ bản của mảng cộng dồn, nên sẽ không đề cập cách
   làm chi tiết.
   -chặt nhị phân xxem có tìm được đoạn con nào :
   +có độ dài >= k;
   +tbc >=x;
   -Gỉa sử đoạn có độ dài l>=k;
   (a1+a2+a3+...+al)/l>=x;
   <=>(a1-x)+(a2-x)+(a3-x)+...>=0
*/

void solution()
{
    double t = accumulate(a + 1, a + 1 + n, 0);
    double l = -t, r = t, res = -t;

    while (r - l >= eps)
    {
        double mid = (l + r) / 2;

        if (check(mid))
        {
            res = mid;
            l = mid;
        }
        else
            r = mid;
    }

    cout << fixed << setprecision(4) << res;
}

main()
{
    freopen("quality.inp", "r", stdin);
    freopen("quality.out", "w", stdout);
    enter();
    solution();

    return 0;
}



