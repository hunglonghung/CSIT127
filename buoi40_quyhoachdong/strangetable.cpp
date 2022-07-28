#include<bits/stdc++.h>
using namespace std;
long long ntest,m,n,x,column,row,ans;
long long solve(long long m, long long n,long long x)
{
    if(x%m==0)
    {
        column=x/m;
        row=m;
    }
    else
    {
        column=x/m+1;
        row=x%m;
    }
    ans=n*(row-1)+column;
    return ans;
}
int main()
{
    freopen("strangetable.inp","r",stdin);
    freopen("strangetable.out","w",stdout);
    cin>>ntest;
    while(ntest--)
    {
        cin>>m>>n>>x;
        cout<<solve(m,n,x)<<endl;
    }
}
