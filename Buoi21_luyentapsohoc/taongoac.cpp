#include<bits/stdc++.h>
using namespace std;
int x[21];
int sum=0;
int k,n;
void ghinghiem()
{
    if(sum==0)
    {
        for(int i=1;i<=2*n;i++)
        {
            if(x[i]==0)
                cout<<"(";
            else
                cout<<")";
        }
        cout<<endl;
    }
}
void backtrack(int i)
{
    if(sum<0) return;
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if(j==0)
            sum++;
        else
            sum--;
        if(i==2*n)
            ghinghiem();
        else
            backtrack(i+1);
        if(j==0)
            sum-=1;
        else
            sum+=1;
    }

}
int main()
{

    //freopen("taongoac.inp","r",stdin);
    //freopen("taongoac.out","w",stdout);
    cin>>n;
    backtrack(1);
}
