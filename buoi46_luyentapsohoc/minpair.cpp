#include<bits/stdc++.h>
using namespace std;
long long l,r,n,a,b,cnt,j=0,res=1001;
long long c[1001];
int main()
{
    freopen("minpair.inp","r",stdin);
    freopen("minpair.out","w",stdout);
    cin>>l>>r>>n;
    a=l%n;
    b=r%n;
    if(b<=a ||l-r>=n)
    {
        cout<<"0";
        return 0;
    }
    cnt=l;
    while(cnt<=r)
    {
        j++;
        c[j]=cnt;
        cnt++;
    }
    for(long long i=1;i<=j-1;i++)
    {
        for(long long k=i+1;k<=j;k++)
        {
            res=min(res,((c[i]%n)*(c[k]%n))%n);
        }
    }
    cout<<res;

}
