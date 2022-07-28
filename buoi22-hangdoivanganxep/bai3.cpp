#include<bits/stdc++.h>
using namespace std;
stack<char> st;
int main()
{
    string s;
    int k,cnt=0;
    string res;
    getline(cin,s);
    cin>>k;
    for(int i=0;i<=s.size()-1;i++)
    {
        while(!st.empty()&&st.top()<s[i]&&cnt<k)
        {
            st.pop();
            cnt++;
        }
        st.push(s[i]);
    }
    while(!st.empty())
    {
        res=st.top()+res;
        st.pop();
    }
    cout<<res;

}
