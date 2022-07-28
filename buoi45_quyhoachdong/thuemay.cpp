#include<bits/stdc++.h>
using namespace std;
struct money
{
    long long a,b,c,place;
};
money rent[10001];
long long dp[10001];
long long trace[10001];
stack<long long>d;
long long n,jmax,lmax,maxi,cnt=0,k;
bool cmp(money x,money y)
{
    return x.a<y.a;
    if(x.a==y.a)
    {
        if(x.b!=y.b)
            return x.b<y.b;
        if(x.b==y.b)
            return x.c<y.c;
    }
}
int main()
{
    freopen("thuemay.inp","r",stdin);
    freopen("thuemay.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>rent[i].a>>rent[i].b>>rent[i].c;
        rent[i].c*=(rent[i].b-rent[i].a+1);
        rent[i].place=i;
    }
    sort(rent+1,rent+1+n,cmp);
    dp[1]=rent[1].c;
    for(long long i=2;i<=n;i++)
    {
        jmax=0;
        for(long long j=1;j<=i-1;j++)
        {
            if(rent[j].b<rent[i].a && jmax<dp[j])
            {
                jmax=dp[j];
                lmax=j;
            }
        }
        dp[i]=jmax+rent[i].c;
        trace[i]=lmax;
    }
    maxi=1;
    for(long long i=2;i<=n;i++)
    {
        if(dp[i]>dp[maxi])
        {
            maxi=i;
        }
    }
    k=maxi;
    while(maxi!=0)
    {
        d.push(rent[maxi].place);
        maxi=trace[maxi];
        cnt++;
    }
    cout<<d.size()<<" ";
    cout<<dp[k]<<endl;
    while(!d.empty())
    {
        cout<<d.top()<<endl;
        d.pop();

    }
}
