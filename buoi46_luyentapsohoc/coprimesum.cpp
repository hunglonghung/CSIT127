#include<bits/stdc++.h>
using namespace std;
long long isprime[1000001];
long long t,n,m,sum1,sum2,sum;
long long gcd(long long a,long long b)
{
    long long temp;
    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
void solve()
{
    sum=(n+1)*n/2LL;
    sum1=(sum-m)/2LL;
    sum2=sum-sum1;
    if(gcd(sum1,sum2)==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    freopen("coprimesum.inp","r",stdin);
    freopen("coprimesum.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        solve();
    }
}
