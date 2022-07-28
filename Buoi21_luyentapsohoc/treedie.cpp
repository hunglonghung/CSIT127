#include<bits/stdc++.h>
using namespace std;
int k=0,n,cnt=0;
pair<int,int> A[100001];
int mark[100001];
void diachi()
{
    sort(A+1,A+1+n);
    for(int i=1;i<=n;i++)
        if (mark[A[i].second]==1)
        {
            mark[A[i].second]=0;
            mark[A[i].second-1]=0;
            mark[A[i].second+1]=0;
            k++;
        }

}
int main()
{
    freopen("treedie.inp","r",stdin);
    freopen("treedie.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i].first;
        A[i].second=i;
        mark[i]=1;
    }
    diachi();
    cout<<k;


}
