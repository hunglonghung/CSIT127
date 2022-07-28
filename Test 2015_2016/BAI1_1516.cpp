#include<bits/stdc++.h>
using namespace std;
long long a,b,c,x,cnt=0;
int main()
{
    freopen("bai1_1516.inp","r",stdin);
    freopen("bai1_1516.out","w",stdout);
    cin>>a>>b>>c;
    for(long long i=1;i<c/b;i++)
    {
        if((c-b*i)%a!=0)
            break;
        else
        {
            x=(c-b*i)/a;
            if(__gcd(x,i)==1)
                cnt++;
        }

    }
    cout<<cnt;
}
