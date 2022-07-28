#include<bits/stdc++.h>
using namespace std;
long long n,j,res=1;
bool scp(long long n)
{
    if((double)sqrt(n)==(int)sqrt(n))
        return true;
    else return false;

}
int main()
{
    freopen("squareroot.inp","r",stdin);
    freopen("squareroot.out","w",stdout);
    cin>>n;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)
        {
            long long j=n/i;
            if(scp(i)==true)
                res=max(res,(long long )sqrt(i));
            if(scp(j)==true)
                res=max(res,(long long)sqrt(j));

        }
    cout<<res;
}

