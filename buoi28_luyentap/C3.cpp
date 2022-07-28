#include<bits/stdc++.h>
using namespace std;
long long A[100001];
double mark[100001];
int main()
{
    freopen("C3.inp","r", stdin);
    freopen("C3.out","w",stdout);
    long long n,k,cnt=0;
    double res;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        mark[A[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        res=k-A[i];
        if(int(sqrt(res))==sqrt(res))
           for(int j=i;j<=n;j++)
            if(A[j]==sqrt(res))
                cnt+=mark[A[j]];

    }
    cout<<cnt;

}
