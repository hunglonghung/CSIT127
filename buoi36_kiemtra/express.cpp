#include<bits/stdc++.h>
using namespace std;
long long n,maxvalue=0,sum=0,res,ans;
long long a[1001];
int main()
{
    freopen("express.inp","r",stdin);
    freopen("express.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    for(int i=1;i<=n-2;i++)
        for(int j=i+1;j<=n-1;j++)
        {
            if(j==i+1)
            {
                res=a[i+2]*a[i+1]*a[i];
                ans=sum-a[i]-a[i+1]-a[i+2]+res;
            }
            else
            {
                res=a[i]*a[i+1]+a[j]*a[j+1];
                ans=sum-a[i]-a[i+1]-a[j]-a[j+1]+res;
            }
            maxvalue=max(maxvalue,ans);
        }
    cout<<maxvalue;
}
