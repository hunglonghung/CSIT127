#include<bits/stdc++.h>
using namespace std;
long long m,n,total=0,tourguide;
priority_queue<long long>maxremain;
pair<long long,long long> a[100001];
bool cmp(pair<long long, long long>a,pair<long long, long long>b)
{
    if(a.second!=b.second)
        return a.second>b.second;
    if(a.second==b.second)
        return a.first>b.first;
}
int main()
{
    freopen("BAI2_1617.inp","r",stdin);
    freopen("BAI2_1617.out","w",stdout);
    cin>>m>>n;
    for(long long i=1;i<=m;i++)
    {
        cin>>a[i].first>>a[i].second;
        total+=a[i].first;
        if(a[i].first<=a[i].second)
            a[i].second=a[i].first;
    }
    sort(a+1,a+1+n,cmp);
    /*
    for(long long i=1;i<=m;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    */
    tourguide=a[1].first/a[1].second;
    n-=tourguide;
    maxremain.push(a[1].first%a[1].second);
    total-=tourguide*a[1].second;
    for(long long i=2;i<=m;i++)
    {
        if(maxremain.top()>=a[i].second)
        {
            total-=maxremain.top();
            maxremain.pop();
            n--;
        }
        tourguide=a[i].first/a[i].second;
        if(n-tourguide>=0)
        {
            n-=tourguide;
            maxremain.push(a[i].first%a[i].second);
            total-=tourguide*a[i].second;
        }
        if(n-tourguide<0)
        {
            total-=n*a[i].second;
            break;
        }


    }
    cout<<total;

}
