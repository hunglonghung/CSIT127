#include<bits/stdc++.h>
using namespace std;
stack<long long> postfix;
string s;
long long type(char x)
{
    if(x=='(')
        return 2;
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^')
        return 1;
    if(x>='A'&& x<='Z')
        return 0;
    else return 3;
}
long long priority(char x)
{
    if(x=='^')
    {
        return 4;
    }
    if(x=='*'||x=='/')
    {
        return 3;
    }
    if(x=='+'||x=='-')
    {
        return 2;
    }
    if(x=='(')
    {
        return 1;
    }
}
void solve()
{
    for(int i=0;i<=s.size()-1;i++)
    {
        if(type(s[i])==0)
            cout<<s[i];
        if(type(s[i])==1)
            postfix.push(s[i]);
        if(type(s[i])==2)
        {
            if(priority(s[i])<=priority(postfix.top()))
                cout<<postfix.top();
            postfix.push(s[i]);
        }
        if(type(s[i])==3)
        {
            while (!postfix.empty() && postfix.top() != '(')
            {
                cout << postfix.top() << ' ';
                postfix.pop();
            }
        }
    }
    while(postfix.empty()!=1)
        {
            long long res=postfix.top();
            cout<<res;
            postfix.pop();
        }
}
int main()
{
    freopen("changepostfix.inp","r",stdin);
    freopen("changepostfix.out","w",stdout);
    cin >> s;
    solve();
}
