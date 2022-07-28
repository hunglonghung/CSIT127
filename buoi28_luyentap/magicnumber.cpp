#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    //freopen("convertnum.inp","r",stdin);
    //freopen("convertnum.out","w",stdout);
    int ntest,res=0,ans=0;
    int ts,ms;
    cin>>ntest;
    for(int i=1;i<=ntest;i++)
    {
        int product=10,n;
        cin>>s;
        for(int j=0; j<=s.size()-1;j++)
        {
            if(s[j]=='.')
            {
                res=s.size()-j-1;
            }
        }
        for(int h=1;h<=res;h++)
        {
            product*=10;
        }
        while(n!=0)
        {
            n=s.size()-1;


        }

    }
}
