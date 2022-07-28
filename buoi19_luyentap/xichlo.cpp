#include<bits/stdc++.h>
using namespace std;
int n;
long long res=0;
long long A[1000001];
long long mark[1000001];
int main()
{
    freopen("xichlo.inp","r",stdin);
    freopen("xichlo.out","r",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        mark[A[i]]++;
    }
    res=res+mark[4]+mark[3]+mark[2]/2;
    if(mark[1]>mark[3])
        if(mark[2]%2==0)
            res+=mark[1];
        else
            res=res+mark[1]-2;
    cout<<res;
    return 0;
}
