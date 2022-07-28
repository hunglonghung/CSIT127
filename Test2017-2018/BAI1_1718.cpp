#include<bits/stdc++.h>
using namespace std;
string t,h,res,ans;
long long remember=0,remain,divisor;
string sum(string a, string b)
{
    while(a.size()<b.size())
        a='0'+a;
    while(a.size()>b.size())
        b='0'+b;
    remember = 0;
    res = " ";
    for(int i=a.size()-1; i>=0 ; i--)
    {
        long long digit=(a[i]-'0')+(b[i]-'0')+remember;
        if(digit>9)
            remember=1;
        else
            remember=0;
        res=(char)(digit%10+48)+res;
    }
    if(remember>0)
        res='1'+res;
    res.erase(res.size()-1);
    return res;
}
string reduction(string a, string b)
{
    while(a.size()>b.size())
        b='0'+b;
    remember = 0;
    res = " ";
    for(int i=a.size()-1; i>=0 ; i--)
    {
        long long digit=(a[i]-'0')-(b[i]-'0')-remember;
        if(digit<0)
        {
            remember=1;
            digit+=10;
        }
        else
            remember=0;
        res=(char)(digit%10+48)+res;
    }
    if(remember>0)
        res[0]=res[0]-'1';
    while(res[0]=='0')
        res.erase(0,1);
    res.erase(res.size()-1);
    return res;
}
string division2(string s)
{
    divisor=0;
    remain=0;
    for(long long i=0;i<=s.size()-1;i++)
    {
        divisor=remain*10+(s[i]-'0');
        remain=divisor%2;
        divisor/=2;
        ans=ans+(char)(divisor+48);
    }
    while(ans[0]=='0')
    {
        ans.erase(0,1);
    }
    return ans;
}
int main()
{
    freopen("BAI1.inp","r",stdin);
    freopen("BAI1.out","w",stdout);
    cin>>t>>h;
    //cout<<sum(t,h)<<endl;
    //cout<<reduction("100231237","32432423")<<endl;
    string k=division2(sum(t,h));
    cout<<k<<endl;
    cout<<reduction(t,k)<<endl;

}
