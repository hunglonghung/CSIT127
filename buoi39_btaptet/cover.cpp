#include<bits/stdc++.h>
using namespace std;
pair<long long, long long> a[10001];
pair<long long, long long> c[10001];
long long b[10001];
long long n,res=0,cnt=0;
int main()
{
    freopen("cover.inp","r",stdin);
    freopen("cover.out","w",stdout);
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i].first>>b[i];
        a[i].second= a[i].first+b[i];
    }
    for(long long i=0;i<n;i++)
    {
        c[2*i]=make_pair(a[i].first,0);
        c[2*i+1]=make_pair(a[i].second,1);
    }
    sort(c,c+2*n);
    for(long long i=0;i<2*n;i++)
    {
        if(i>0&& c[i]>c[i-1] &&cnt>0)
            res+=(c[i].first-c[i-1].first);
        if(c[i].second==1)
            cnt--;
        if(c[i].second==0)
            cnt++;
    }
    cout<<res;


}
