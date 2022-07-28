#include<bits/stdc++.h>
using namespace std;
double d,n,res=0;
double A[1001];
double t[1001];
int main()
{
    freopen("robot.inp","r",stdin);
    freopen("robot.out","w",stdout);
    cin>>n>>d;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        t[i]=d/A[i]+i-1;
    }
    for(int j=2;j<=n;j++)
        for(int i=1;i<=j-1;i++)
            if(t[i]>t[j])
                res++;
    cout<<res;


}
