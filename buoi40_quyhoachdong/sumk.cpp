#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
long long a[1001];
long long sum[1001];
long long n,k;
int main()
{
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
}
