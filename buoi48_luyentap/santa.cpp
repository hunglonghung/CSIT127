#include<bits/stdc++.h>
using namespace std;
long long n,cnt,first,last,sum,k;
priority_queue<long long>qu;
long long a[1000001];
int main()
{
    freopen("santa.inp","r",stdin);
    freopen("santa.out","w",stdout);
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cnt=k*2-n;
    first=1;
    last=n-cnt;
    while(first<last)
    {
        sum=a[first]+a[last];
        qu.push(sum);
        first++;
        last--;
    }
    for(long long i=n-cnt+1;i<=n;i++)
    {
        qu.push(a[i]);
    }
    cout<<qu.top();
    return 0;
}
