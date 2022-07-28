#include<bits/stdc++.h>
using namespace std;
int cot[9];
int cheochinh[9];
int cheophu[9];
void ghinghiem()
{
    for(int i=1;i<=n;i++)
        if(mark[i]==1)
            cout<<A[i]<<" ";

}
void solve(int i)
{
    for(int j=0;j<=1;j++)
    {
        mark[i]=j;
        sum=sum+A[i]*j;
        if(i==n)
        {
            if(sum==t)
            {
                ghinghiem();
                ans=1;
            }

        }
        else
            solve(i+1);
        if(ans==1)
            return;
        sum=sum-A[i]*j;
    }

}

int main()
{
    //freopen("atm.inp","r",stdin);
    //freopen("atm.out","w",stdout);
    cin>>n>>t;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    solve(1);
    if(ans==0)
        cout<<"-1";

}

