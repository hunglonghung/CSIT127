#include<bits/stdc++.h>
using namespace std;
long long test,giaithuai,n;
const long long divider=1000000007;
long long f[1000001];
int main()
{
    freopen("sequence.inp","r",stdin);
    freopen("sequence.out","w",stdout);
    f[1]=1;
    giaithuai=1;
    for(long long i=2;i<=1000001;i++)
    {
        giaithuai=((giaithuai%divider)*(i%divider))%divider;
        f[i]=((f[i-1]%divider)*(giaithuai%divider))%divider;
    }
    cin>>test;
    while(test--)
    {
        cin>>n;
        cout<<f[n]<<endl;
    }

}
