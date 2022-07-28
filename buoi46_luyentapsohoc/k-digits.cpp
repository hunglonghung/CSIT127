#include<bits/stdc++.h>
using namespace std;
long long a,b,k,res,test,lastdigit;
long long powermod(long long a, long long b ,long long m)
{
    if(b==0)
        return 1;
    long long t=powermod(a,b/2,m)%m;
    if(b&1)
        return ((t*t)%m*(a%m))%m;
    else
        return (t*t)%m;
}
long long cntnum(long long x)
{
    long long ans=0;
    while(x>0)
    {
        x/=10;
        ans++;
    }
    return ans;
}
int main()
{
    freopen("k-digits.inp","r",stdin);
    freopen("k-digits.out","w",stdout);

    cin>>test;
    while(test--)
    {
        res=1;
        cin>>a>>b>>k;
        for(long long i=1;i<=k;i++)
        {
            res*=10;
        }
        lastdigit=powermod(a,b,res);
        if(cntnum(lastdigit)<k)
        {
            for(long long i=1;i<=k-cntnum(lastdigit);i++)
            {
                cout<<"0";
            }
        }
        if(lastdigit!=0)
            cout<<lastdigit;
        cout<<endl;
    }


}
