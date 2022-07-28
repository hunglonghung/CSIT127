#include<bits/stdc++.h>
using namespace std;
string s;
long long cnt,k;
stack <long long > a;
vector< long long> biggestnum;
void solve()
{
    for(long long i=0; i<=s.size()-1;i++)
    {
        while(!a.empty()&&(s[i]-'0')>a.top()&&cnt<k)
        {
            a.pop();
            cnt++;
        }
        a.push(s[i]-'0');
    }
    while(!a.empty())
    {
        biggestnum.push_back(a.top());
        a.pop();
    }
    for(long long i=biggestnum.size()-1;i>=0;i--)
        cout<<biggestnum[i];
}
int main()
{
    freopen("delnum.inp","r",stdin);
    freopen("delnum.out","w",stdout);
    cin>>s>>k;
    solve();
}
