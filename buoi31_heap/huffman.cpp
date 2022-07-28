#include<bits/stdc++.h>
using namespace std;
priority_queue<long long, vector<long long>, greater<long long> >A;
long long t,n,i,a,b,res;
int main()
{
    //freopen("huffman.inp","r",stdin);
    //freopen("huffman.out","w",stdout);
    cin>>t;
    while(t--)
    {
        res=0;
        cin>>n;
        while(n--)
        {
            cin>>i;
            A.push(i);
        }
        while(A.size()>1)
        {
            a=A.top();
            A.pop();
            b=A.top();
            A.pop();
            res+=(a+b);
            A.push(a+b);
        }
        A.pop();
        cout<<res;
    }
}
