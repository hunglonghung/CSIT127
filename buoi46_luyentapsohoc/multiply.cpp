#include<bits/stdc++.h>
using namespace std;
long long t,a,b,m;
long long indianmul(long long a,long long b,long long m)
{
    if(b==0)
        return 0;
    long long t=indianmul(a,b/2,m)%m;
    if(b%2==1)
        return ((t+t)%m+a%m)%m;
    else
        return (t+t)%m;
}
int main()
{
    freopen("multiply.inp","r",stdin);
    freopen("multiply.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>m;
        cout<<indianmul(a,b,m);
    }
}
