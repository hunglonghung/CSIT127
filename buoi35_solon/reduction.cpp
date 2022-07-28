#include<bits/stdc++.h>
using namespace std;
string a,res;
long long b, hold, s;
vector <long long> A;
string division(string a, long long b)
{
    res="";
    hold=0;
    for(long long i=0;i<=a.size()-1;i++)
    {
        hold =hold *10+(a[i]-'0');
        s=hold/b;
        hold=hold%b;
        res=res+(char)(s+48);
    }
    while(res.size()>1 && res[0]=='0')
        res.erase(0,1);
    return res;
}
long long division2(string a, long long b)
{
    hold=0;
    for(long long i=0;i<=a.size()-1;i++)
    {
        hold =hold *10+(a[i]-'0');
        s=hold/b;
        hold=hold%b;
    }
    if(hold!=0)
        return 0;
    else return 1;
}
int main()
{
    freopen("reduction.inp","r",stdin);
    freopen("reduction.out","w",stdout);
    cin>>a>>b;
    for(long long i=sqrt(b);i>=1;i--)
    {
        if(b%i==0)
        {
            A.push_back(i);
            A.push_back(b/i);
        }
    }
    sort(A.begin(),A.end());
    for(long long i=A.size()-1;i>=0;i--)
    {
       if(division2(a,A[i])==1)
          {
            cout<<division(a,A[i])<<endl;
            cout<<b/A[i];
            break;
          }
    }

}
