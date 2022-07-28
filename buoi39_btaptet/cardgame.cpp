#include<bits/stdc++.h>
using namespace std;
long long m,n,k,res=0,maxn=0;
long long a[100001];
long long mark[100001];
bool cmp(long long a,long long b)
{
    return a>b;
}
int main()
{
    freopen("cardgame.inp","r",stdin);
    freopen("cardgame.out","w",stdout);
    cin>>m>>n>>k;
    for(long long i=1;i<=m*n;i++)
    {
        cin>>a[i];
        mark[a[i]]++;
        maxn=max(maxn,a[i]);
    }
    sort(mark+1,mark+1+maxn,cmp);
    for(long long i=1;i<=k;i++)
    {
        res+=mark[i];

    }
    cout<<res;



}
