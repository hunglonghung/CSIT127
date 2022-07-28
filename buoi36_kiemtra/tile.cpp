#include<bits/stdc++.h>
using namespace std;
long long n,stability,cnt=1;
long long a[1000001];
vector <long long> b;
bool cmp(long long a,long long b)
{
    return a>b;
}
int main()
{
    freopen("tile.inp","r",stdin);
    freopen("tile.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n,cmp);
    stability=a[1];
    for(int i=2;i<=n;i++)
    {
        if(stability>0)
        {
            cnt++;
            stability=min(a[i],stability-1);
        }
        else break;
    }
    cout<<cnt;
}

