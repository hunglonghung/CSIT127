#include<bits/stdc++.h>
using namespace std;
int A[11];
int mark[11];
int cnt,k,n;
void ghinghiem()
{
    cout<<++cnt<<". ";
    for(int i=1;i<=k;i++)
    {
        if(mark[i]==1)
        cout<<A[i]<<" ";
        mark[i]=0;
    }
    cout<<endl;

}
void chinhhop(int i)
{
    for(int j=1;j<=n;j++)
    {
        A[i]=j;
        mark[i]=1;
        if(i==k)
        {
            ghinghiem();
        }
        else
            chinhhop(i+1);

    }
}
int main()
{
    freopen("chlap.inp","r",stdin);
    freopen("chlap.out","w",stdout);
    cin>>n>>k;
    chinhhop(1);
}
