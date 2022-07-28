#include<bits/stdc++.h>
using namespace std;
long long l[1000001];
long long n;
const long long maxn=1e9+7;
int main()
{
    freopen("s_binary.inp","r",stdin);
    freopen("s_binary.out","w",stdout);
    cin>>n;
    l[1]=2;
    l[2]=3;
    for(long long i=3;i<=n;i++)
    {
        l[i]=(l[i-1]%maxn+l[i-2]%maxn)%maxn;
    }
    cout<<l[n];
}

