#include<bits/stdc++.h>
using namespace std;
long long A[100001];
long long n,first,second;
int main()
{
    //freopen("tl.inp","r",stdin);
    //freopen("tl.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    cout<<A[1]<<endl;
    first=max(A[1],A[2]);
    second=min(A[1],A[2]);
    cout<<A[1]*A[2]<<endl;
    for(int i=3;i<=n;i++)
    {
        if(A[i]>first)
        {
            second=first;
            first=A[i];
        }
        if(A[i]>second&&A[i]<first)
        {
            second=A[i];
        }
        cout<<first*second<<endl;
    }
}
