#include<bits/stdc++.h>
using namespace std;
long long n,q;
string s;
vector<string> str;
char cha[100001];
vector<char> ch;
int main()
{
    freopen("filedel.inp","r",stdin);
    freopen("filedel.out","w",stdout);
    cin>>n>>q;
    for(long long i=1; i<=n; i++)
    {
        cin>>s;
        str.push_back(s);
    }
    for(long long i=1; i<=q; i++)
    {
        cin>>cha[i];
    }
    sort(cha+1,cha+1+q);
    for(long long i=1; i<=q; i++)
    {
        if(cha[i]!=cha[i-1])
            ch.push_back(cha[i]);
    }
    for(long long i=0;i<=ch.size()-1;i++)
    {
        for(long long j=0;j<=str.size()-1;j++)
        {
            for(long long k=0;k<=str[j].size()-1;k++)
            {
                if(ch[i]==str[j][k])
                {
                    str.erase(str.begin()+j)
                    n--;
                    break;
                }

            }

        }
        cout<<n<<endl;
    }

}

