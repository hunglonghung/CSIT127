#include<bits/stdc++.h>
using namespace std;
priority_queue<long long,vector<long long>,greater<long long>> minnum;
long long a[50001];
pair<long long ,long long>b[50001];
long long n,m,cnt=1,cost=0;
bool cmp(long long a, long long b)
{
    return a>b;
}
bool cmp2(pair<long long ,long long> a,pair<long long, long long>b)
{
    return a.first>b.first;
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
}
int main()
{
    freopen("BAI2_1516.inp","r",stdin);
    freopen("BAI2_1516.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(long long j=1;j<=m;j++)
    {
        cin>>b[j].first>>b[j].second;
    }
    sort(a+1,a+1+n,cmp);
    /*
        for(long long i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
    */
    sort(b+1,b+1+m,cmp2);
    /*
    for(long long j=1;j<=m;j++)
    {
        cout<<b[j].first<<" "<<b[j].second<<endl;
    }
    */
    for(long long i=1;i<=n;i++)
    {
        while(a[i]<=b[cnt].first)
        {
            minnum.push(b[cnt].second);
            cnt++;
        }
        cost+=minnum.top();
    }
    cout<<cost;



}
