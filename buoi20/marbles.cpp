#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i*(i+1)==n*2)
            return false;
    }
    return true;
}
int main()
{
    freopen("marbles.inp","r",stdin);
    freopen("marbles.out","w",stdout);
    int n;
    cin>>n;
    if(check(n)==false)
        cout<<"YES";
    else
        cout<<"NO";


}
