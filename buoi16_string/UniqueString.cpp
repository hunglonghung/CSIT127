#include<bits/stdc++.h>
using namespace std;
string a;
int res;
vector<int> A;
int main()
{
    freopen("UniqueString.inp", "r", stdin);
    freopen("UniqueString.out", "w", stdout);
    cin>>a;
    for(int i=0;i<=a.size()-2;i++)
        for(int h=i+1;h<=a.size()-1;h++)
            if(a[i]==a[h])
            {
                res=h-i;
                A.push_back(res);
                break;
            }
    res = *max_element(A.begin(), A.end());
    cout<<res;
}

