#include<bits/stdc++.h>
using namespace std;
long long n,maxn=1e9+7;
long long f[1000001];
int main()
{
    freopen("waytohome.inp","r",stdin);
    freopen("waytohome.out","w",stdout);
    cin>>n;
    if(n<=1)
    {
        cout<<"0";
        return 0;
    }
    f[0]=1;
    f[1]=1;
    for(long long i=2;i<=n-1;i++)
    {
        f[i]=(f[i-1]%maxn+f[i-2]%maxn)%maxn;
    }
    cout<<f[n-1];
}
