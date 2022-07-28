#include<bits/stdc++.h>
using namespace std;
long long A[100001];
long long n,k,a,b,m;
bool kiemtra;
bool check(long long k)
{
    priority_queue<long long>qu1;
    priority_queue<long long>qu2;
    for(long long i=1;i<=k;i++)
    {
        qu1.push(A[i]);
    }
    for(long long i=k+1;i<=2*k;i++)
    {
        qu2.push(A[i]);
    }
    while(!qu1.empty()&& !qu2.empty())
    {
        a=qu1.top();
        b=qu2.top();
        qu1.pop();
        qu2.pop();
        if(a>=b)
            return false;
    }
    return true;
}
int main()
{
    freopen("rusdoll.inp","r",stdin);
    freopen("rusdoll.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    k=n/2;
    kiemtra=false;
    for(long long i=k;i>=1;i--)
    {
        if(check(i)==true)
        {
            cout<<i;
            return 0;
            kiemtra=true;
        }
        if(kiemtra=false)
            cout<<"-1";
    }
}
