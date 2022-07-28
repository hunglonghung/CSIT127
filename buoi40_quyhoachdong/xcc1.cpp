#include<bits/stdc++.h>
using namespace std;
long long dp[1001][1001];
string s1,s2;
int main()
{
    freopen("xcc1.inp","r",stdin);
    freopen("xcc1.out","w",stdout);
    cin>>s1>>s2;
    s1=" "+s1;
    s2=" "+s2;
    dp[0][0]=0;
    for(long long i=1;i<=s1.size()-1;i++)
    {
        for(long long j=1;j<=s2.size()-1;i++)
        {
            if(s1[i]==s2[j])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }

    }
    cout<<dp[s1.size()-1][s2.size()-1];
}
