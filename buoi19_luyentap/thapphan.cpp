#include <bits/stdc++.h>
using namespace std;
long long a, b, pos, loopStart;
long long quotient[20000000];
int cnt;
int mark[20000000];

void enter()
{
    freopen("thapphan.inp", "r", stdin);
    freopen("thapphan.out", "w", stdout);

    cin >> a >> b;
}

void solve()
{


    cout << a / b << '.'; // Ban dau in ra phan nguyen cua so a / b truoc
    mark[a % b] = ++pos; // Mang mark luu vi tri xuat hien cua so du a % b, bat dau tu vi tri 1
    a %= b;

    while (true)
    {
        a *= 10;
        long long r = a % b;
        quotient[++cnt] = a / b;
        if (mark[r])
        {
            loopStart = mark[r];
            break;
        }
        else
            mark[r] = ++pos, a = r;
    }

    for (int i = 1; i < loopStart; ++i)
        cout << quotient[i];
    cout << "(";
    for (int i = loopStart; i <= cnt; ++i)
        cout << quotient[i];
    cout << ")";
}

int main()
{
    enter();
    solve();
    return 0;
}



