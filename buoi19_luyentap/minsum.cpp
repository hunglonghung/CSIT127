#include<bits/stdc++.h>
using namespace std;
long long  A[11];
vector<long long> B;
long long sum,n;
long long mark[11];
void tong(int i)
{
    for(int j=0; j<=1;j++)
    {
        sum=sum + A[i]*j;
        if(i==n)
        {
            if (sum != 0)
                B.push_back(sum);
        }
        else
            tong(i+1);
        sum=sum-A[i]*j;
    }
}
int main()
{
    //freopen("minsum.inp","r",stdin);
    //freopen("minsum.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    tong(1);
    sort(B.begin(),B.end());
    if(B[0]!=1)
    {
        cout<<"1";
        return 0;
    }
    for(int i=1;i<=B.size()-1;i++)
    {
        if(B[i]-B[i-1]>1)
        {
            cout<<B[i-1]+1;
            return 0;
        }
    }
    cout<<B.back()+1;


}
