#include<bits/stdc++.h>
using namespace std;
long long x,y,a,b,t;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}
int main()
{
    //freopen("reach.inp","r",stdin);
    //freopen("reach.out","w",stdin);
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        if(gcd(x,y)==gcd(a,b))
        {
            cout<<"1"<<endl;
        }
        else cout<<"0"<<endl;
    }
}
