#include<bits/stdc++.h>
using namespace std;
long long n,k,step,place;
int main()
{
    freopen("frog.inp","r",stdin);
    freopen("frog.out","w",stdout);
    cin>>n>>k;
    if(k%n==0)
    {
        cout<<n;
        return 0;
    }
    else
    {
        while(k%n!=0)
        {
            step=(k-n)/n+1;
            place=k-(step*n);
            n=place;
        }
    }
    cout<<n;


}
