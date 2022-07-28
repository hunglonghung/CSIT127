#include<bits/stdc++.h>
using namespace std;
int mark[21];
pair<int,int> A[21];
int weight,sum,n,w, res;

void solve(int i)
{
    for(int j=0;j<=1;j++)
        if (j == 0 || (j == 1 && weight + A[i].second <= w))
        {
            weight=weight+A[i].first*j;
            sum=sum+A[i].second*j;
            if(i==n)
                res = max(res, sum);
            else
                solve(i+1);
            weight-=A[i].first*j;
            sum-=A[i].second*j;
        }
}

int main()
{
    cin>>n>>w;
    for(int i=1;i<=n;i++)
        cin>>A[i].first>>A[i].second;
    cout << res;
}
