#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void solve()
{
    stack< char > a;

    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='(')
            a.push('(');
        if(s[i]=='[')
            a.push('[');
        if(s[i]=='{')
            a.push('{');

        if(s[i]==']')
            {
            if(!a.empty() && a.top()=='[')
                a.pop();
            else
                {
                    cout<<"NO";
                    return;
                }
            }
        if(s[i]=='}')
            {
            if(!a.empty()&& a.top()=='{')
                a.pop();
            else
                {
                    cout<<"NO";
                    return;
                }
            }
        if(s[i]==')')
            {
            if(!a.empty()&&a.top()=='(')
                a.pop();
            else
                {
                    cout<<"NO";
                    return;
                }
            }
    }
    if(a.empty()==true)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    //freopen("brackets.inp","r",stdin);
    //freopen("brackets.out","w",stdout);
    cin>>n;
    for(int i=1;i=n;i++)
    {
        cin>>s;
        solve();
    }


}
