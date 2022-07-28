#include<bits/stdc++.h>
using namespace std;
int n,k;
int ans=0;
int res=0;
int mu10(int k)
{
    int sum=1;
    for(int i=1;i<=k;i++)
        sum=sum*10;
    return sum;
}
void demso()
{
    while(n>0)
    {
        n/=10;
        res++;
    }
}
int main()
{
    cin>>n;
    k=n;
    demso();
    for(int i=1;i<res;i++)
        ans=ans+(mu10(i)-mu10(i-1))*i;
    ans=ans+(k-mu10(res-1)+1)*res;
    cout<<ans;


}

