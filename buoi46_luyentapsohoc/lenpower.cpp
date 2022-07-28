#include<bits/stdc++.h>
using namespace std;
long long n,k,ans;
int main()
{
    freopen("lenpower.inp","r",stdin);
    freopen("lenpower.out","w",stdout);
    cin>>n>>k;
    ans=k*log10(n);
    cout<<ans+1;
}
