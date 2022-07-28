#include<bits/stdc++.h>
using namespace std;
string s;
long long n,l,i,j;
long long dp[1001];
long long check[1001][1001];
int main()
{
    freopen("palinsplit.inp","r",stdin);
    freopen("palinsplit.out","w",stdout);
    cin>>n;
    cin>>s;
    s=' '+s;
    for(long long i=1;i<=n;i++)
    {
        check[i][i]=1;
    }
    for(l=2;l<=n;l++)
    {
        for(i=1;i<=n-l+1;i++)//diem dau
        {
            j=i+l-1;//diem cuoi
            if(l==2)
            {
                if(s[i]==s[j])
                    check[i][j]=1;
            }
            else
            {
                if(s[i]==s[j] && check[i+1][j-1]==1)
                    check[i][j]=1;
            }

        }
    }
    for(long long i=1;i<=n;i++)
    {
        if(check[1][i]==1)
            dp[i]=1;
        else
        {
            dp[i]=i;
            {
                for(long long j=1;j<=i-1;j++)
                    if (check[j+1][i]==1 && 1 + dp[j]<dp[i])
                        dp[i] = 1 + dp[j];
            }
        }
    }
    cout<<dp[n];
}

