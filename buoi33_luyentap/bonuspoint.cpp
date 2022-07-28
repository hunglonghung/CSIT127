#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e5+1;
long long point[maxn];
long long n,res;
int main()
{
    //freopen("bonuspoint.inp","r",stdin);
    //freopen("bonuspoint.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>point[i];
    }
    res=point[1];
    for(int i=1;i<=n;i++)
    {
        res=max(res,point[i]);
        cout<<res;
    }
}
