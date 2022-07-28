#include<bits/stdc++.h>
using namespace std;
priority_queue<long long, vector<long long>, greater<long long> >biscuit;
long long n,k,i,a,b;
long long step;
vector <long long> cookie;
int main()
{
    cin>>n>>k;
    while(n--)
    {
        cin>>i;
        biscuit.push(i);
    }
    while(biscuit.top()<k)
    {
        a=biscuit.top();
        biscuit.pop();
        b=biscuit.top();
        biscuit.pop();
        biscuit.push(a+b*2);
        step++;

    }
    cout<<step;

}
