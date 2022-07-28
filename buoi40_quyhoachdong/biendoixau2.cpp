#include<bits/stdc++.h>
using namespace std;
string a,b;
long long dp[202][202];
long long m,n;
int main()
{
    freopen("biendoixau2.inp","r",stdin);
    freopen("biendoixau2.out","w",stdout);
    cin>>a>>b;
    a=' '+a;
    b=' '+b;
    m=a.size()-1;
    n=b.size()-1;
    for (int j=0; j<=n;j++)
        dp[0][j] = j;
    for (int i=1;i<=m;i++)
        dp[i][0] = i;

    for (int i=1;i<=m;i++)
        for (int j=1;j<= n;j++)
            if (a[i]== b[j])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min(dp[i][j-1], min(dp[i-1][j-1], dp[i-1][j]))+1;
    cout<<dp[m][n]<<endl;

    while(m!=0||n!=0)
    {
        if(a[m]==b[n])
        {
            m--;
            n--;
        }
        else
        {
            if(dp[m][n]==dp[m][n-1]+1)
            {
                cout<<"insert("<<m<<","<<b[n]<<")"<<endl;
                n--;
            }
            if(dp[m][n]==dp[m-1][n]+1)
            {
                cout<<"delete("<<m<<")"<<endl;
                m--;
            }
            if(dp[m][n]==dp[m-1][n-1]+1)
            {
                cout<<"replace("<<m<<","<<b[n]<<")"<<endl;
                m--;
                n--;

            }
        }
    }

}


