#include<bits/stdc++.h>
using namespace std;
long long n,t;
long long a[100001];
long long b[100001];
long long dp[100001];
long long l[100001];
long long l1,l2,r1,r2,check;
int main()
{
    freopen("computer.inp","r",stdin);
    freopen("computer.out","w",stdout);
    cin>>n>>t;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    cin>>l1>>r1>>l2>>r2;
    for(long long i=1;i<=n;i++)
    {
        dp[a[i]]++;
        dp[b[i]+1]--;
    }
    for(long long i=1;i<=t;i++)
    {
        dp[i]+=dp[i-1];
    }
    check=0;
    for(long long i=l1;i<=r1;i++)
    {
        if(dp[i]>=0)
        {
            check=1;
        }
    }
    if(check=0)
        cout<<"1";
    else cout<<"0";
    cout<<endl;
    check=0;
    for(long long i=l2;i<=r2;i++)
    {
        if(dp[i]>=0)
        {
            check=1;
        }
    }
    if(check=0)
        cout<<"0";
    else cout<<"1";
    cout<<endl;
    for(long long i=1;i<=t;i++)
    {
        l[i]=l[i-1];
        if(dp[i]>0)
            l[i]=l[i-1]+1;
    }





}
