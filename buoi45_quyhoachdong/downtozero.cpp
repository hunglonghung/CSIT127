#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> dp[1000001];
long long n,q,check;
void eratosthene()
{
    dp[1].second=1,dp[0].second=1;
    for(long long i=2;i*i<1e5+1;i++)
    {
        if(dp[i].second=0)
        {
            for(long long j=i*i;j<=1e6+1;j+=i)
            {
                dp[i].second=1;
            }
        }

    }
}
void setup()
{
    for(long long i=1;i<=1e5+1;i++)
    {
        dp[i].first=dp[i-1].first+1;
        if(dp[i].second==0)
        {
            for(long long j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    dp[i].first=min(dp[i].first,dp[i/j].first+1);
                    break;
                }

            }
        }

    }
}
int main()
{
    freopen("downtozero.inp","r",stdin);
    freopen("downtozero.out","w",stdout);
    setup();
    cin>>q;
    while(q--)
    {
        cin>>n;
        cout<<dp[n].first<<endl;
    }
}
