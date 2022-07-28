#include<bits/stdc++.h>
using namespace std;
long long n,cnt=0,res,ans=1000000001;
long long a[10001];
int main()
{
    freopen("operation.inp","r",stdin);
    freopen("operation.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            cnt++;
    }
    if(cnt>0)
    {
        cout<<n-cnt;
        return 0;
    }

    else
    {
        for(long long i=1;i<=n;i++)
        {
            res=a[i];
            for(long long j=i+1;j<=n;j++)
            {
                res=__gcd(res,a[j]);
                if(res==1)
                {
                    ans=min(ans,j-i+n-1);
                }
            }
        }

    }
    if(ans!=1000000001)
        cout<<ans;
    else cout<<"-1";
}
