#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e5+1;
long long a[maxn],mark[maxn];
int main()
{
    long long cnt=0;
    long long n,k,res;
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        mark[a[i]]++;;
    }
    for(int i=1;i<=n;i++)
    {
        res=k-a[i];
        cnt+=mark[res];
    }
    cout<<cnt/2;

}
