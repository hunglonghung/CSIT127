#include<bits/stdc++.h>
using namespace std;
int n;
int solve(int n)
{
    int maxn = 0;
    while (n > 0)
    {
        int temp = n % 10;
        n /= 10;
        maxn=max(temp,maxn);
    }
    return maxn;

}
int main()
{
    freopen("magicnumber.inp","r",stdin);
    freopen("magicnumber.out","w",stdout);
    int cnt=0;
    cin>>n;
    while(n!=0)
    {
        n= n-solve(n);
        cnt++;
    }
    cout<<cnt;
}
