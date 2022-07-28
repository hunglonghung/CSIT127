#include<bits/stdc++.h>
using namespace std;
long long a,b,x,ntest,maxlcm,GCD;
long long gcd(long long a , long long b)
{
    while(b!=0)
    {
        long long r=a%b;
        a=b;
        b=r;
    }
    return a;
}
void solve()
{
    maxlcm=0;
    for (long long x = b; ; --x)
    {
        GCD = gcd(a, x);
        maxlcm = max(maxlcm, x * a / GCD);
        if (GCD == 1)
            break;
    }
    cout<<maxlcm<<endl;
}
int main()
{
    freopen("lcm.inp","r",stdin);
    freopen("lcm.out","w",stdout);
    cin>>ntest;
    while(ntest--)
    {
        cin>>a>>b;
        solve();
    }
}
