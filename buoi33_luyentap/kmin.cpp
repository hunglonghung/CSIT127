#include<bits/stdc++.h>
using namespace std;
long long A[50001];
long long B[50001];
long long m,n,k;
struct arrange
{
    long long sum;
    long long a;
    long long b;
};
struct cmp
{
    bool operator()(arrange a, arrange b)
    {
        return a.sum < b.sum;
    }
};


priority_queue< arrange , vector< arrange > , cmp> C;
int main()
{
    cin >> m >> n>> k;
    for(int i=1 ;i <= m ;i ++)
        cin>>A[i];
    for(int i=1 ;i <= n ; i++)
        cin>>B[i];
    sort( B+1 ,B+1+n );
    for(int i=1 ; i <= m ; i ++)
    {
        C.push({A[i]+B[1],i,1});
    }
    while( k-- )
    {
        cout<<C.top().sum;
        long long placeA= C.top().a;
        long long placeB= C.top().b;
        C.pop();
        if(placeB+1<=n)
            C.push({B[placeB+1]+A[placeA],placeA,placeB+1});
    }



}
