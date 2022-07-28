#include<bits/stdc++.h>
using namespace std;
string s;
long long test,n,product,cnt,cnt2;
string convert(long long n)
{
    stack <long long> st;
    string x;
    long long i=0;
    while(n>0)
    {
        st.push(n%2);
        n/=2;
    }
    while(!st.empty())
    {
        i++;
        x[i]=st.top();
        st.pop();
    }
    return x;

}
int main()
{
    freopen("lucky.inp","r",stdin);
    freopen("lucky.out","w",stdout);
    cin>>test;
    while(test--)
    {
        product=2;
        cnt=0;
        cnt2=0;
        cin>>n;
        while(n>=0)
        {
            n-=product;
            cnt++;
            product*=2;
        }
        n+=product/2;
        long long save=cnt;
        product=2;
        while(n>=0)
        {
            n-=product;
            cnt2++;
            product*=2;
        }
        s=convert(n+product/2-1);
        while(s.size()<=save)
        {
            s='0'+s;
        }
        for(long long i=0;i<=s.size()-1;i++)
        {
            if(s[i]=='0')
                s[i]='4';
            else s[i]='7';
        }
        cout<<s<<endl;


    }
}
