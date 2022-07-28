#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
queue<int>A;
vector<int>B;
void biendoi()
{
    A.push(1);
    int tong=1;
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        while(cnt!=tong)
        {
            a=2*A.front()+1;
            b=3*A.front()+1;
            A.push(a);
            A.push(b);
            A.pop();
            cnt++;
        }
        tong *=2;
    }

    while(!A.empty())
    {
        B.push_back(A.front());
        A.pop();
    }
    sort(B.begin(),B.end());
    cout<<B[m-1];
}


int main()
{
    freopen("tapn.inp","r",stdin);
    freopen("tapn.out","w",stdout);
    cin>>n>>m;
    biendoi();
}
