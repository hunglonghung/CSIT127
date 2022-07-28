#include<bits/stdc++.h>
using namespace std;
int n,v,amount,cnt;
int main()
{
    //freopen("trip.inp","r",stdin);
    //freopen("trip.out","w",stdout);
    cin>>n>>v;
    if(n>v)
    {
        amount=n-1;
        amount-=v;
        cnt=v;
        cnt+=(2+amount-1+2)*amount/2;
        cout<<cnt;
    }
    else
        cout<<n;
}
