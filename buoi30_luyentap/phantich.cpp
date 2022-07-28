#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 1;
int n,ntest,isprime[maxn],prevdivisor[maxn],primedivisor[maxn];
void Eratosthene(int maxn)
{
    isprime[0]=isprime[1]=1;
    for(int i=2;i*i<=maxn;i++)
        if(isprime[i]==0)
        {
            for(int j=i*i;j<=maxn;j+=i)
            {
                isprime[j]=1;
                if(primedivisor[j]==0)
                    primedivisor[j]=i;
            }
        }
     for (int i=2;i<=maxn;i++)
        if (isprime[i] == 0)
            primedivisor[i] = i;
}
 void Extract(int n)
{
    int prevdivisor = primedivisor[n];
    n /= prevdivisor;
    cout << prevdivisor << ' ';
        while (n != 1)
        {
            if (primedivisor[n] != prevdivisor)
            {
                cout << primedivisor[n] << ' ';
                prevdivisor = primedivisor[n];
            }
            n /= primedivisor[n];
        }
    cout << endl;
}
int main()
{
    //freopen("phantich.inp","r",stdin);
    //freopen("phantich.out","w",stdout);
    cin>>ntest;
    Eratosthene(maxn);
    while(ntest--)
    {
        cin>>n;
        Extract(n);
    }
}
