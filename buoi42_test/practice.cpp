#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> a[100001];
long long n,t,cnt=0;
bool cmp(pair<long long,long long> A,pair<long long,long long> B)
{
    if(A.first!=B.first)
        return A.first<B.first;
    if(A.first==B.first)
        return A.second>B.second;
}
void enter()
{
    freopen("practice.inp","r",stdin);
    freopen("practice.out","w",stdout);
    cin>>n>>t;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
}
void solve()
{
    sort(a+1,a+1+n,cmp);
    for(long long i=1;i<=n;i++)
    {
        if(t>=a[i].first)
        {
            cnt++;
            t+=a[i].second;
        }
        else
            break;
    }
    cout<<cnt;


}
int main()
{
    enter();
    solve();
    //for(long long i=1;i<=n;i++)
        //cout<<a[i].first<<" "<<a[i].second<<endl;
}
