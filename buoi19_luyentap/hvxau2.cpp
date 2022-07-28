#include<bits/stdc++.h>
using namespace std;
string s;
string xau;
int A[11];
vector<string>B;
vector<char> C;

void solve(int i)
{
    if(!B.empty()&&xau<=B.back())
        return;
    for (int j = 0; j < C.size(); ++j)
        if (A[j]==0)
        {
            A[j]=1;
            xau=xau+C[j];
            if (i == C.size()-1)
                B.push_back(xau);
            else solve(i+1);
            xau.erase(i,1);
            A[j]=0;
        }
}
int main()
{
    //freopen("hvxau2.inp","r",stdin);
    //freopen("hvxau2.out","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
        C.push_back(s[i]);
    sort(C.begin(),C.end());
    solve(0);
    for (int i = 0; i < B.size(); ++i)
        cout << B[i] << endl;
}
