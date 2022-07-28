#include<bits/stdc++.h>
using namespace std;
long long n,k,res,ans,t;
long long solve(long long n, long long k)
{
        if(n<=k)
        {
            if(k%n==0)
                return k/n;
            else
                return (k/n)+1;
        }
        if(n>k)
        {
            res=(n/k)+1;
            ans=k*res;
            if(ans%n==0)
                return ans/n;
            else return (ans/n)+1;
        }

}
int main()
{
    freopen("divisiblesum.inp","r",stdin);
    freopen("divisiblesum.out","w",stdout);
    cin>>t;
    while(t--)
    {
            cin>>n>>k;
            cout<<solve(n,k)<<endl;
    }


}
