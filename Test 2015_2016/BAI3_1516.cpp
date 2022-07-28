#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> nam[100001];
pair<long long,long long> nu[100001];
long long cnt[101];
long long cntnam=1;
long long cntnu=1;
pair<long long, long long>info;
long long n,gender;
long long solve(long long a[],long long dem)
{
    for(long long i=1;i<=dem;i++)
    {

    }
}
int main()
{
    freopen("BAI3_1516.inp","r",stdin);
    freopen("BAI3_1516.out","w",stdout);
    cin>>n;
    for(long i=1;i<=n;i++)
    {
        cin>>info.first>>info.second>>gender;
        if(gender==1)//nam
        {
            nam[cntnam]=make_pair(info.first,info.second);
            cntnam++;
        }
        else//nu
        {
            nu[cntnu]=make_pair(info.first,info.second);
            cntnu++;
        }
    }
    sort(nam+1,nam+1+n);
    sort(nu+1,nu+1+n);


}
