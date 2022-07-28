#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
long long l[1000001];
long long k[1000001];
long long ntest,n,sum,ans,maxsum,ans2;
int main()
{
    freopen("maxsum2.inp","r",stdin);
    freopen("maxsum2.out","w",stdout);
    cin>>ntest;
    while(ntest--)
    {
        sum=0,ans=0,ans2=0;
        cin>>n;
        for(long long i=1;i<=n;i++)
        {
            cin>>a[i];
            sum=max(sum+a[i],a[i]);
            ans2=max(ans2,sum);
        }
        l[1]=a[1];
        for(long long i=1;i<=n;i++)
        {
            maxsum=0;
            for(long long j=1;j<=i-1;j++)
            {
                if(l[j]>maxsum)
                {
                    maxsum=l[j];
                }
                if(a[i]>=0)
                {
                    l[i]=maxsum+a[i];
                }
                else
                {
                    l[i]=maxsum;
                }
            }
            ans=max(ans,l[i]);
        }
        cout<<ans<<" ";
        cout<<ans2<<endl;
    }



}
