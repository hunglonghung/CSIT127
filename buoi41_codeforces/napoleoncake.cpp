#include<bits/stdc++.h>
using namespace std;
long long n,a,b;
long long ntest;
long long solve(long long a, long long b)
{
    return a*b;
}
int main()
{
    freopen("napoleoncake.inp","r",stdin);
    freopen("napoleoncake.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
}
