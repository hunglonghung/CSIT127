#include<bits/stdc++.h>
using namespace std;
long long n,nextnum1,cnt1,nextnum2,cnt2,sum1,sum2,ans,res,a,b;
long long solve(long long a,long long b)
{
    res=0;
    cnt1=0;
    cnt2=0;
    nextnum2=0;
    nextnum1=0;
    while(cnt1+nextnum1<a)
    {
        cnt1+=nextnum1;
        nextnum1++;
    }
    sum1=nextnum1*(cnt1+nextnum1-a+1);
    while(cnt2+nextnum2<b)
    {
        cnt2+=nextnum2;
        nextnum2++;
    }
    sum2=nextnum2*(b-cnt2);
    for(long long i=nextnum1+1;i<nextnum2;i++)
    {
        res+=i*i;
    }
    ans=res+sum1+sum2;
    if(nextnum1==nextnum2)
    {
        ans=(b-a+1)*nextnum1;
    }
    return ans;
}
int main()
{
    freopen("instruck.inp","r",stdin);
    freopen("instruck.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
}
