#include<bits/stdc++.h>
using namespace std;
long long m,n,cnt=0,l,r,mid,ans;
long long a[100001];
long long b[100001];
vector<long long>A;
vector<long long>B;
int main()
{
    freopen("BAI2_1718.inp","r",stdin);
    freopen("BAI2_1718.out","w",stdout);
    cin>>m>>n;
    for(long long i=1;i<=m;i++)
    {
        cin>>a[i];
        A.push_back(a[i]);
    }
    for(long long j=1;j<=n;j++)
    {
        cin>>b[j];
        B.push_back(b[j]);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(long long i=1;i<=n;i++)
    {
        if(B[i]>A.front())
        {
            l=0;////tim so nho nhat trong day a sao cho so do lon hon b[i]
            r=A.size()-1;
            ans=-1;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(A[mid]>B[i])
                {
                    r=mid-1;
                    ans=mid;
                }
                else l=mid+1;
            }
           if(ans!=-1)
           {
               A.erase(A.begin()+ans);
               A.erase(A.begin());
               cnt++;
           }
        }
    }
}
