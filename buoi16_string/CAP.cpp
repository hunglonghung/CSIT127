#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CAP.inp","r",stdin);
    freopen("CAP.out","r",stdout)
    int A[5001];
    string res;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    for(int i=n;i>=1;i--)
        if(A[i]==0)
            res="AB"+res;
        else
        {
            res="A"+res;
            res.insert(A[i],"B");
        }
    cout<<res;
}
