#include<bits/stdc++.h>
using namespace std;
int sum=0,res=0,n,a,b;
int u(int n)
{
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)
        {
            sum=sum+i+n/i;
        }
    return sum;

}
int main()
{
    cin>>n;
    for(int a=1;a<=n;a++)
    {
        b=u(a);
        if(a==u(b)&&a<=u(b))
            res++;
    }
    cout<<res;
}
