#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("Cstring.inp","r",stdin);
    //freopen("Cstring.out","w",stdout);
    int res=1;
    string s;
    vector<string> A;
    cin>>s;
    for(int i=0;i<=s.size()-1;i++)
    {
        string st="";
        for(int j=i;j<=s.size()-1;j++)

        {
            st=st+s[j];
            A.push_back(st);
        }
    }
    sort(A.begin(),A.end());
    for(int i=1;i<=A.size()-1;i++)
        if(A[i]!=A[i-1])
            res++;
    cout<<res;



}
