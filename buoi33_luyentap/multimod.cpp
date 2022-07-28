#include<bits/stdc++.h>
using namespace std;
long long a,b,c,res,ans=1;
int main()
{
    freopen("multimod.inp","r",stdin);
    freopen("multimod.out","w",stdout);
    cin>>a>>b>>c;
    res=a%c;
    for(int i=a+1;i<=b;i++)
    {
        res=(res*i%c)%c;
    }
    cout<<res;
}
