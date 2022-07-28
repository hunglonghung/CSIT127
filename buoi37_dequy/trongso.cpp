#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long a[100001];
deque<long long> qu;
void solve()
{
    for(long long i=1;i<=n;i++)
    {
        while(!qu.empty()&&qu.front()<i-k)
            qu.pop_front();
        if (i<=k)
            cout << "1"<< " ";
        else
            cout << a[qu.front()] * a[qu.front()] << " ";
        while(!qu.empty()&&a[qu.back()]<=a[i])
            qu.pop_back();
        qu.push_back(i);
    }
}
int main()
{
    freopen("coconut.inp","r",stdin);
    freopen("coconut.out","w",stdout);
    ios_base::sync_with_stdio();
    cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    solve();

}
