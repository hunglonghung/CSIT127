#include<bits/stdc++.h>
using namespace std;
int n;
bool isprime(int a)
{
    if(a==2)
        return true;
    if(a<2)
        return false;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}
void sochan()
{
    for(int i=n/2;i>=2;i--)
        if(isprime(i)==true&&isprime(n-i)==true)
            {
                cout<<i<<" "<<n-i;
                return;
            }
    cout<<"-1";

}
void sole()
{
    if(isprime(n-2)==true)
        cout<<"2"<<" "<<n-2;
    else
        cout<<"-1";
}
int main()
{
    freopen("euler.inp","r",stdin);
    freopen("euler.out","w",stdout);
    int ntest;
    cin>>ntest;
    for(int i=1;i<=ntest;i++)
    {
        cin>>n;
        if(n%2==0)
            sochan();
        if(n%2==1)
            sole();
    }

}
