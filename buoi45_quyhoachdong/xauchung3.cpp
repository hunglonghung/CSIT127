#include<bits/stdc++.h>
using namespace std;
long long dp[201][201][201];
long long trace[201];
stack<char>st;
string a,b,c;
long long m,n,p;
int main()
{
    freopen("xauchung3.inp","r",stdin);
    freopen("xauchung3.out","w",stdout);
    cin>>a>>b>>c;
    a=' '+a;
    b=' '+b;
    c=' '+c;
    for(long long i=1;i<=a.size()-1;i++)
    {
        for(long long j=1;j<=b.size()-1;j++)
        {
            for(long long k=1;k<=c.size()-1;k++)
            {
                if(a[i]==b[j]&& b[j]==c[k])
                {
                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                }
                else
                {
                    dp[i][j][k]=max(dp[i-1][j][k],(max(dp[i][j-1][k],dp[i][j][k-1])));
                }
            }
        }
    }
    m=a.size()-1;
    n=b.size()-1;
    p=c.size()-1;
    while(m>=1 && n>=1 && p>=1)
    {
        if(a[m]==b[n] && b[n]==c[p])
        {
            st.push(a[m]);
            m--;
            n--;
            p--;
        }
        else
        {
            if(dp[m][n][p]==dp[m-1][n][p])
            {
                m--;
            }
            if(dp[m][n][p]==dp[m][n-1][p])
            {
                n--;
            }
            if(dp[m][n][p]==dp[m][n][p-1])
            {
                p--;
            }
        }
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }



}
