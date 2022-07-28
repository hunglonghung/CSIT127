#include<bits/stdc++.h>
using namespace std;
long long n;
long long r[100001];
long long a[100001];
long long l[100001];
deque<long long> qu;
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
    freopen("expand.inp","r",stdin);
    freopen("expand.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    solve();
    for(int i=1;i<=n;i++)
    {
        cout<<l[i]<<" "<<r[i]<<endl;
    }

}
