#include<bits/stdc++.h>
using namespace std;
deque<long long>qu;
long long a[30001];
long long n,k,first,last,ntest;
void solve()
{
    first=1;
    last=k;
    for(long long i=1;i<=k;i++)
    {
        while (!qu.empty() && a[qu.back()] >= a[i])
            qu.pop_back();
        qu.push_back(i);
    }
    cout<<a[qu.front()]<<" ";
    for(int i=2;i<=n-k+1;i++)
    {
        first=i;
        last=k+i-1;
        if(qu.front()< first)
        {
            while(first>qu.front()&&!qu.empty())
                qu.pop_front();
            if(a[qu.front()]>=a[last])
                qu.push_front(last);
            else
            {
                while (!qu.empty() && a[qu.back()] >= a[last])
                    qu.pop_back();
                qu.push_back(last);
            }
        }
        else
        {
            while (!qu.empty() && a[qu.back()] >= a[last])
                qu.pop_back();
            qu.push_back(last);
        }
        cout<<a[qu.front()]<<" ";
    }
    cout<<endl;
    qu.clear();
}
int main()
{
    freopen("mink.inp","r",stdin);
    freopen("mink.out","w",stdout);
    cin>>ntest;
    while(ntest--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        solve();
    }

}
