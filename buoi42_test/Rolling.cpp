#include<bits/stdc++.h>
using namespace std;
long long n,k,x=14,res,cntrange,range,sumrange,res3,res4,res5,res6,ans;
long long sum[5];
int main()
{
    freopen("rolling.inp","r",stdin);
    freopen("rolling.out","w",stdout);
    cin>>n>>k;
    sum[1]=6;
    sum[2]=10;
    sum[3]=11;
    cntrange=k/4;
    res=k%4;
    range=cntrange*x;
    range+=a[i];
    res3=n%k;
    res4=res3%4;
    if((res3/4)!=0)
    {
        res5=res3/4;
        res6=res5*x;
    }
    res6+=a[i];
    ans=(n/k)*res2+res6;
    cout<<ans;



}
