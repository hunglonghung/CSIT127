#include<bits/stdc++.h>
using namespace std;
long long cnt,k;
string s;
deque<char>dq;
void solve()
{
    dq.push_back(s[0]);
    cnt = 0;
    for (int i=1;i<=s.size()-1 ; i++)
    {
        while (!dq.empty()&& dq.back() < s[i] && cnt < k)
            dq.pop_back(), ++cnt;
        dq.push_back(s[i]);
    }
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i];
}
int main()
{
    freopen("delnum.inp","r",stdin);
    freopen("delnum.out","w",stdout);
    cin>>s>>k;
    solve();
}

