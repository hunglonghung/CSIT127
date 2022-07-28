#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
long long M,N,j,totalsum,maxtotalpoint;
long long X,A[maxn],B[maxn],prefixsum[maxn];
void nhiphan()
{
    long long l=1;
    long long r=N;
    j = 0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(prefixsum[mid] <= X-totalsum)
        {
            j=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }

}

void enter()
{
    cin>>M>>N>>X;
    for (int i=1;i<=M;i++)
        cin >> A[i];
    for (int i=1;i<=N;++i)
    {
        cin >> B[i];
        prefixsum[i] = prefixsum[i - 1] + B[i];
    }
}

void solve()
{
    long long maxtotalpoint = 0;
    totalsum=0;
    for (int i = 1; i <= M; ++i)
    {
        totalsum += A[i];
        if (totalsum > X)
            break;
        nhiphan();
        maxtotalpoint = max(maxtotalpoint, (long long)i + j);
    }

    cout << maxtotalpoint << endl;
}

int main()
{
    freopen("stackgame.inp", "r", stdin);
    freopen("stackgame.out", "w", stdout);
    int ntest;
    cin >> ntest;
    while (ntest--)
    {
        enter();
        solve();
    }
    return 0;
}
