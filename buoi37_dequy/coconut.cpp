#include<bits/stdc++.h>
using namespace std;
deque<long long>qu;
long long n,cnt=0;
long long a[1000001];
long long l[1000001];
long long r[1000001];
void solve()
{
    for(long long i=1;i<=n;i++)
    {
        while(!qu.empty()&&a[qu.back()]>=a[i])
            qu.pop_back();
        if(qu.empty())
            l[i]=1;
        else
            l[i]=qu.back()+1;
        qu.push_back(i);
    }
    qu.clear();
    for(long long i=n;i>=1;i--)
    {
        while(!qu.empty()&&a[qu.back()]>=a[i])
            qu.pop_back();
        if(qu.empty())
            r[i]=n;
        else
            r[i]=qu.back()-1;
        qu.push_back(i);
    }

}
int main()
{
    freopen("coconut.inp","r",stdin);
    freopen("coconut.out","w",stdout);
    ios_base::sync_with_stdio();
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    solve();
    for(long long i=1;i<=n;i++)
    {
     if(r[i]-l[i]+1>=a[i])
         cnt=max(cnt,a[i]);
    }
    cout<<cnt;


}
