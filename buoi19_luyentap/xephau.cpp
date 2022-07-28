#include<bits/stdc++.h>
using namespace std;
int cnt,n;
int x[9];
int cot[9];
int cheochinh[9];
int cheophu[9];
void ghinghiem()
{
    cout<<++cnt<<". ";
    for(int i=1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<endl;
}
void dathau(int i)
{
    for(int j=1;j<=n;j++)
        if(cot[j]==0&&cheochinh[i-j]==0&&cheophu[i+j]==0)
        {
            x[i]=j;
            cot[j]=1;
            cheochinh[i-j]=1;
            cheophu[i+j]=1;
            if(i==n)
            {
                ghinghiem();
            }
            else
                dathau(i+1);
            cot[j]=0;
            cheochinh[i-j]=0;
            cheophu[i+j]=0;

        }

}
int main()
{
    //freopen("xephau.inp","r",stdin);
    //freopen("xephau.out","w",stdout);
    cin>>n;
    if(n==2)
        cout<<"";
    dathau(1);
}

