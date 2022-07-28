#include<bits/stdc++.h>
using namespace std;
int x[21];
int cnt,k,n;
void ghinghiem()
{
    cout<<++cnt<<".";
    for(int i=1;i<=k;i++)
        cout<<x[i]<<" ";
    cout<<endl;
}
void backtrack(int i)
{
    for(int j=x[i-1];j<=n-k+1;j++)
    {
        x[i]=j;
        if(i==k)
            ghinghiem();//dk dung sinh
        else
            backtrack(i+1);//sinh thanh phan tiep theo
    }
}
int main()
{
    cin>>n>>k;
    freopen("tohop.inp","r",stdin);
    freopen("tohop.out","w",stdout);
    backtrack(1);
}
