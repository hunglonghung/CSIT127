#include<bits/stdc++.h>
using namespace std;
string m,res,res2,a,b,ans;
vector<string> A;
long long digit,rememberextract;
long long check(string a, string b)//ham so sanh 2 string
{
    while(a.size()<b.size())
        a='0'+a;
    while(b.size()<a.size())
        b='0'+b;
    if(a>b)
        return 1;
    if(a==b)
        return 0;
    if(a<b)
        return -1;
}
string convert(long long k)// chuyen tu long long sang string
{
    while(k>0)
    {
        res=(char)(k%10+48)+res;
        k/=10;
    }
    return res;
}
string extract(string a, string b)//ham tinh hieu
{
    if(check(a,b)<0)
        swap(a,b);
    while(a.size()<b.size())
        a='0'+a;
    while(b.size()<a.size())
        b='0'+b;
    for(int i=a.size()-1; i>=0 ; i--)
    {
        digit=(a[i]-'0')-(b[i]-'0')-rememberextract;
        if(digit<0)
        {
            rememberextract=1;
            digit+=10;
        }
        else rememberextract=0;
        res2=(char)(digit%10+48)+res2;
    }

    while(!res2.empty()&&res2[0]==0)
        res2.erase(0,1);
}

int main()
{
    cin>>m;
    string x=m;
    m=extract(m,convert(9*m.size()));
    while(check(m,x)<=0)
    {
        for(int i=0;i<=m.size()-1;i++)
        {
           ans=sum(m,convert2(m[i]));
        }
        if(check(ans,x)==0)
        {
            cout<<ans;
            break;
        }
        else m=sum(m,"1");
    }


}
