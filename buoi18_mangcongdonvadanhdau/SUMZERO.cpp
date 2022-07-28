#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int> sum[1000001];
int res;
int A[1000001];
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first==b.first)
        return a.second<b.second;
    else
        return a.first<b.first;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        sum[i].first=sum[i-1].first+A[i];
        sum[i].second=i;
        if(sum[i].first==0)
            res=i;
    }
    sort(sum+1,sum+1+n,cmp);
    int start=sum[1].second;
    for(int i=2;i<=n;i++)
    {
        if(sum[i].first!=sum[i-1].first)
        {
            res=max(res,sum[i-1].second-start+1);
            start=sum[i].second;
        }
    }

}
