#include<bits/stdc++.h>
using namespace std;
long long a[100001],l[100001],trace[100001],k[100001];
long long n,m,res;
int main()
{
    freopen("tratien.inp","r",stdin);
    freopen("tratien.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (int j = 1; j <= n; j++)
    {
        l[a[j]]=1;
        trace[a[j]]=a[j];
    }

    for (int i = 1; i <= m; i++)
	    for (int j = 1; j <= n; j++)
	        if (i >= a[j])
	        {
                if ((l[i] > l[i-a[j]] + 1 && l[i-a[j]] != 0) || (l[i] == 0 && l[i-a[j]] != 0))
                {
                    l[i] = l[i-a[j]] + 1;
                    trace[i]=a[j];
                }
	        }
    cout<<l[m]<<endl;
    while(true)
    {
        res=m;
        k[trace[res]]++;
        m-=trace[res];
        if(m==0)
            break;
    }
    for(long long i=1;i<=n;i++)
    {
        cout<<k[a[i]]<<" ";
    }



}

