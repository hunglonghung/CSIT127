#include<bits/stdc++.h>
using namespace std;
priority_queue<long long,vector<long long>, greater<long long>> qu;
pair<long long , long long> A[100001];
long long phong=1,n;
int main()
{
    freopen("ksan.inp","r",stdin);
    freopen("ksan.out","w",stdout);
    cin>>n;
    sort(A+1,A+1+n);
    for(long long i=1;i<=n;i++)
    {
        cin>>A[i].first;
    }
    for(long long i=1;i<=n;i++)
    {
        cin>>A[i].second;
        A[i].second=A[i].first+A[i].second;
    }
    qu.push(A[1].second);
    for(long long i=2;i<=n;i++)
    {
        if(A[i].first>=qu.top())
            qu.pop();
        else
            phong++;
        qu.push(A[i].second);
    }
    cout<<phong;
}
