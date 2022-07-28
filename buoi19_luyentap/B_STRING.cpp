#include<bits/stdc++.h>
using namespace std;
int x[21];
int k,n;
void ghinghiem()
{
    for(int i=1;i<=n;i++)
    {
        if(x[i]==0)
            cout<<"A";
        else
            cout<<"B";
    }
    cout<<endl;
}
void backtrack(int i)
{
    for(int j=0;j<=1;j++)
        if(j==0||(j==1&&x[i-1]==0))
        {
            x[i]=j;
            if(i==n)
                ghinghiem();
            else
                backtrack(i+1);
        }
}
int main()
{

    freopen("B_string.inp","r",stdin);
    freopen("B_string.out","w",stdout);
    cin>>n;
    backtrack(1);
}
