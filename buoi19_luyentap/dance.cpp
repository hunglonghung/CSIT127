#include<bits/stdc++.h>
using namespace std;
int n;
long long k=1;
long long res=0;
string s;
long long A[1000001];
long long sum[1000001];
int main()
{
    freopen("dance.inp","r",stdin);
    freopen("dance.out","w",stdout);
    cin>>n;
    cin>>s;
    for(int i=0;i < n; i++)
    {
        if(s[i]=='a')
            A[i]=1;
        else
            A[i]=-1;
        sum[i]=sum[i-1]+A[i];
        if(sum[i]==0)
            res++;
    }
    sort(sum+1,sum+1+n);
    for(int i=2;i<=n;i++)
    {
        if(sum[i]=sum[i-1])
            k++;
        else
        {
            res+=k*(k-1)/2;
            k=1;
        }
    }
    cout<<res;
}
