#include<bits/stdc++.h>
using namespace std;
long long t,n;
long long a[5];
long long solve(long long n)
{
    long long temp=n;
    temp=temp-n/2-n/3-n/5-n/7;
    temp=temp+n/6+n/10+n/14+n/15+n/21+n/35;
    temp=temp-n/30-n/105-n/70;
    temp=temp+n/210;
    return temp;
    }
int main()
{
    freopen("bonus.inp","r",stdin);
    freopen("bonus.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<solve(n)<<endl;
    }

}
