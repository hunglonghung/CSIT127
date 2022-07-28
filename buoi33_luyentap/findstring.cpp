#include<bits/stdc++.h>
using namespace std;
vector<string> a;
string s;
char x;
long long n,k,sizenew;
int main()
{
    freopen("findstring.inp","r",stdin);
    freopen("findstring.out","w",stdout);
    cin>>n>>s;
    k=s.size();
    while(k--)
    {
        x=s[0];
        for(int i=1;i<=s.size()-1;i++)
        {
            s[i-1]=s[i];
        }
        s.back()=x;
        a.push_back(s);
    }
    sort(a.begin(),a.end());
    sizenew=unique(a.begin(),a.end())-a.begin();
    if(n<=sizenew)
        cout<<a[n-1];
    else cout<<"-1";
}
