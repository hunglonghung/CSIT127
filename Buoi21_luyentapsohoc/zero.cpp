#include<bits/stdc++.h>
using namespace std;
queue<int> A;
vector<int>B;
int mark[1000];
int n;
void phantich(int n)
{
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            A.push((i-1)*(n/i+1));
        }
    }
}
int main()
{
    freopen("zero.inp","r",stdin);
    freopen("zero.out","w",stdout);
    cin>>n;
    phantich(n);
    if(mark[A.front()]==0)
    {
        mark[A.front()]==1;
        B.push_back(A.front());
        phantich(A.front());
    }
    for(int i=1;i<=B.size()-1;i++)
        cout<<B[i];

}


}
