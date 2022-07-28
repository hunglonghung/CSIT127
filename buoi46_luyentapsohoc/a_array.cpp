#include<bits/stdc++.h>
using namespace std;
long long test;
long long a[51],n,res;
void enter()
{
    res=0;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        res+=a[i];
    }
}
void solve()
{
    if(res>=n)
        cout<<res-n<<endl;
    if(res>0&&res<n)
    {
        cout<<"1"<<endl;
    }
    if(res<=0)
        cout<<"1"<<endl;
}
int main()
{
    //freopen("a_array.inp","r",stdin);
    //freopen("a_array.out","w",stdout);
    cin>>test;
    while(test--)
    {
        enter();
        solve();
    }


}
