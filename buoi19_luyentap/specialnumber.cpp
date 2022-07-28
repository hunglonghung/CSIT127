#include<bits/stdc++.h>
using namespace std;
int n,k,sum;
vector<int> A;
bool snt(int n)
{
    if(n<=1)
    {
        return false;
    }
    for (int i=2;i<=sqrt(n);i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int tachso(int n)
{
    while(n>10)
    {
        k=n%10;
        sum=sum+k*k;
        n/=10;

    }
    return sum;
}
int main()
{
    freopen("specialnumber.inp","r",stdin);
    freopen("specialnumber.out","w",stdout);
    cin>>n;
    while(true)
    {
        n++;
        sum=0;
        tachso(n);
        if(snt(sum)==true)
        {
            cout<<n;
            return 0;
        }
    }

}
