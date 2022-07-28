#include<bits/stdc++.h>
using namespace std;
int A[31];
int sum[31];
int n;
void ghinghiem(int cnt)
{
    cout<<n<<" = ";
    for(int j=1;j<cnt;j++)
    {
        cout<<A[j]<<" + ";
    }
    cout<<A[cnt];
}
void solve(int i)
{
   for(int j=A[i-1];j<=(n-sum[i-1])/2;j++)
    {
        A[i]=j;
        sum[i]=sum[i-1]+A[i];
        solve(i+1);
    }
    A[i]=n-sum[i-1];
    ghinghiem(i);
    cout<<endl;
}
int main()
{
    A[0]=1;
    //freopen("extracts.inp","r",stdin);
    //freopen("extracts.out","w",stdout);
    cin>>n;
    solve(1);


}
