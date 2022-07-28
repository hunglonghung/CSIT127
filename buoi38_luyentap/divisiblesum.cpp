#include<bits/stdc++.h>
using namespace std;
long long n,k,ntest,res;
long long solve(long long n,long long k)
{
    if(n%k==0)
        return 1;
    if(k%n==0&&n!=k)
        return k/n;
    if(n%k!=0)
    {
        if(n>k)
            return (k*((n/k)+1))/n+1;
        else
            return (k/n)+1;
    }
}
int main()
{
    cin>>ntest;
    while(ntest--)
    {
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
}
