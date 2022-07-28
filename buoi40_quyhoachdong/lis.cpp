#include<bits/stdc++.h>
using namespace std;
long long a[1001];
long long l[1001];
long long trace[1001];
stack<long long> st;
long long n,maxn,bestpos;
int main()
{
    freopen("lis.inp","r",stdin);
    freopen("lis.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    l[n]=1;
    for(long long i=n;i>=1;i--)
    {
        long long jmax=n+1;
        for(long long j=i+1;j<=n;j++)
        {
            if(a[i]<a[j]&&l[j]>l[jmax])
            {
                jmax=j;
            }

        }
        l[i]=l[jmax]+1;
        trace[i]=jmax;
    }

    bestpos=1;
    for(long long i=1;i<=n;i++)
    {
        if(l[i]>l[bestpos])
        {
            bestpos=i;

        }
    }
    cout<<l[bestpos];
    cout<<endl;
    while(bestpos!=n+1)
    {
        cout<<a[bestpos]<<" ";
        bestpos=trace[bestpos];
    }
}
