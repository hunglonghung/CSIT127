#include<bits/stdc++.h>
using namespace std;
long long n,q,i;
stack<long long> A;
stack<long long> B;
stack<long long> root;
vector<long long>prime;
long long isprime[10001];
const long long maxn=1e4+1;

void primenumber(long long maxn)
{
    isprime[0]=1;isprime[1]=1;
    for(int i=2;i*i<=maxn;i++)
        if(isprime[i]==0)
        {
            for(int j=i*i;j<=maxn;j+=i)
            {
                isprime[j]=1;
            }
        }
    for(int i=1;i<=maxn;i++)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
        }
    }
}
int main()
{
    freopen("waiter.inp","r",stdin);
    freopen("waiter.out","w",stdout);
    primenumber(maxn);
    cin>>n>>q;
    while(n--)
    {
        cin>>i;
        root.push(i);
    }
    for(int i=1;i<=q;i++)
        {
            if(root.empty()==1)
                break;
            while(root.empty()!=1)
            {
                if(root.top()%prime[i-1]==0)
                    B.push(root.top());
                else A.push(root.top());
                root.pop();
            }
            while(!B.empty())
            {
                cout<<B.top()<<endl;
                B.pop();
            }
            root=A;
            while(!A.empty())
            {
                A.pop();
            }


        }
    while(root.empty()!=1)
    {
        cout<<root.top()<<endl;
        root.pop();
    }
}
