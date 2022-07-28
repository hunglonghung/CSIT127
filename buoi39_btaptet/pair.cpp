#include<bits/stdc++.h>
using namespace std;
long long n,cnt=0;
long long a[1000001];
int main()
{
    freopen("pair.inp","r",stdin);
    freopen("pair.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            a[i]*=-1;
        }
    }
    sort(a+1,a+1+n);
    for(long long i=2;i<=n;i++)
    {
        if(a[i]==a[i-1])
        {
            cnt++;
        }
    }
    cout<<cnt;

}
