#include<bits/stdc++.h>
#define int long long
using namespace std;
long long n,a=6,b=8;
const long long gt =1e18;

long long timso(long long n)
{
    queue<long long> A;
    A.push(a);
    A.push(b);
    while(!A.empty())
    {
        if(A.front()%n==0)
        {
            return A.front();
        }
        else
        {
            if(A.front()*10+6<=gt)
                A.push(A.front()*10+6);
            if(A.front()*10+8<=gt)
                A.push(A.front()*10+8);
            A.pop();
        }
    }
    return -1;

}
main()
{
    int ntest;
    cin>>ntest;
    for(int i=1;i<=ntest;i++)
    {
        cin>>n;
        cout<<timso(n)<<endl;
    }

}
