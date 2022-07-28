#include<bits/stdc++.h>
using namespace std;
int n,k,sum;
int A[7];

vector<int> B;
bool snt(int n)
{
    if(n<=1)
    {
        return false;
    }
    for (int i=2;i<=sqrt(n);i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve(int i)
{
    if(sum >= 1 && snt(sum)==false)
        return;
    for(int j=1;j<=6;j++)
    {
        sum=sum*10+A[j];
        if(i==n)
        {
            if(snt(sum)==true)
                B.push_back(sum);
        }
        else
            solve(i+1);
        sum=sum/10;

    }

}
int main()
{
    //freopen("sieunt.inp","r",stdin);
    //freopen("sieunt.out","w",stdout);
    cin>>n;
    A[1]=1;
    A[2]=2;
    A[3]=3;
    A[4]=5;
    A[5]=7;
    A[6]=9;
    solve(1);
    cout<<B.size()<<endl;
    for(int i=0;i<=B.size()-1;i++)
    {
        cout<<B[i]<<endl;
    }
}
