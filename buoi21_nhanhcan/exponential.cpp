#include<bits/stdc++.h>
using namespace std;
int x,y;
long long powermod(long long a,long long b)
{
    if(b==0) return 1;
    if(b==1) return a;
    long long tmp =powermod(a,b/2)%1000000007;
    if(b%2==1)
        return(tmp*tmp*a)%1000000007;
    else
        return(tmp*tmp)%1000000007;
}
int main()
{
    //freopen("exponential.inp","r",stdin);
    //freopen("exponential.out","w",stdout);
    cin>>x>>y;
    cout<<powermod(x,y);
}
