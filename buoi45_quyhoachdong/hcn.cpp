#include<bits/stdc++.h>
using namespace std;
long long n,jmax;
long long k[101];
struct rec
{
    pair<long long, long long>a;
    pair<long long, long long>b;
    long long c;
};
rec x[101];
bool check(long long i, long long j)
{
    if(x[i].a.first<=x[j].a.first && x[i].a.second<=x[j].a.second && x[i].b.first>=x[j].b.first && x[i].b.second>=x[j].b.second)
        return true;
    return false;

}
bool cmp(rec x,rec y)
{
    return x.c<y.c;
}
int main()
{
    freopen("hcn.inp","r",stdin);
    freopen("hcn.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>x[i].a.first>>x[i].a.second>>x[i].b.first>>x[i].b.second;
        x[i].c=(x[i].b.first-x[i].a.first)*(x[i].b.second-x[i].a.second);
    }
    sort(x+1,x+1+n,cmp);
    k[1]=1;
    for(long long i=2;i<=n;i++)
    {
        jmax=0;
        for(long long j=1;j<=i-1;j++)
        {
            if(check(i,j)==true && k[j]>jmax)
            {
                jmax=k[j];
            }
        }
        k[i]=jmax+1;

    }
    cout<<*max_element(k+1,k+1+n);

}
