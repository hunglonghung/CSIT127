#include<bits/stdc++.h>
using namespace std;
long long a,k,N,res,cnt;
int main()
{
    freopen("m_order.inp","r",stdin);
    freopen("m_order.out","w",stdout);
    cin>>a>>N;
    res=a%N;
    cnt=1;
    while(true)
    {
        cnt++;
        res*=(a%N);
        res%=N;
        if(res==1)
            break;
    }
    cout<<cnt;
}
