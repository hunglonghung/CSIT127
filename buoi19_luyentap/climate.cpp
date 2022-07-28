#include<bits/stdc++.h>
using namespace std;
int l,r,x,n,ntest;
int A[1001];
int height[1001];
void solve()
{
    for(int i=1;i<=n;i++)
        if(l<=A[i]&&A[i]<=r)
        {
            bool k=(A[i]%2==l%2);
            if(k==true)
                height[i]+=x;
            else
                height[i]-=x;
        }
}
int main()
{
    freopen("climate.inp","r",stdin);
    freopen("climate.out","w",stdout);
    cin>>n>>ntest;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    while(ntest--)
    {
        cin>>l>>r>>x;
        solve();
    }
    for(int i=1;i<=n;i++)
        cout<<height[i]<<endl;
}
