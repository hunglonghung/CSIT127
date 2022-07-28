#include<bits/stdc++.h>
using namespace std;
int n;
long long k,res,ans=0;
long long A[100001];
long long mark[100001];
int main()
{
    freopen("C3.inp","r",stdin);
    freopen("C3.out","r",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }

     for(int i=1;i<=n;i++)
    {
        mark[A[i]]++;
        res=k-A[i]*A[i];
        if(res<=500&&res>=0)
            ans=ans+mark[res];
    }
    cout<<res;
    return 0;
}
