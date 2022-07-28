#include<bits/stdc++.h>
using namespace std;
int row,column,x,y,ans=0;
void solve(int i,int j)
{
    int res=0;
    for(int a=1;a<=row;a++)
        for(int b=1;b<=column;b++)
            if(mark[a][b]=="M"||mark[a][b]=="0")
            {
                x=a;
                y=b;
            }
    for(int i=x-1;i<=x+1;i++)
        for(int j=y-1;j<=y+1;j++)
            if(mark[i][j]==".")
            {
                res++;
                ans++;
                if(res==9)
                {
                    mark[i][j]=="0";
                    solve(i,j);
                }
}
int main()
{
    cin>>row>>column;
    string mark[row][column];
    for(int i=1;i<=row;i++)
        for(int j=1;j<=column;j++)
            getline(cin,mark[i][j]);
    solve()
}
