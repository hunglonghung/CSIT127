#include<bits/stdc++.h>
using namespace std;
int a,b,ans,res;
vector<int> A;
void solve()//thap phan sang nhi phan
{
    while(a>0)
    {
        A.push_back(a%2);
        a/=2;
    }
}
void thapphan()
{
    int n=1;
    ans=0;
    for(int i=0;i<= A.size()-1;i++)
    {
        ans += n * A[i];
        n*=2;
    }
}

int main()
{
    freopen("binary.inp","r",stdin);
    freopen("binary.out","w",stdout);
    cin>>a;
    solve();
    for(int i=A.size()-1;i>=0;i--)
        cout<<A[i];// so nhi phan
    cout<<endl;
    int k=A.size()-1;
    for(int j=1;j<=k;j++)
    {
        int x=A[0];
        for(int i=0;i<=A.size()-2;i++)
            A[i]=A[i+1];
        A.back()=x;
        thapphan();//chuyen doi ra so thap phan
        res=max(ans,res);// chon so lon nhat
    }
    cout<<res;

}
