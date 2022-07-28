#include<bits/stdc++.h>
using namespace std;
vector<long long> ans;
long long a,gcd,n,m,ntest,res=0;
int main()
{
    freopen("gcdmax.inp","r",stdin);
    freopen("gcdmax.out","w",stdout);
    cin>>ntest;
    while(ntest--)
    {
        res=0;
        cin>>n>>m;
        a=n/(m*(m+1)/2);
        if(a==0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(long long i=a;i>=1;i--)
        {
            if(n%i==0)
            {
                gcd=i;
                break;
            }
        }
        for(long long i=1;i<=m-1;i++)
        {
            ans.push_back(gcd*i);
            res+=gcd*i;
        }
        ans.push_back(n-res);
        for(long long i=0;i<=ans.size()-1;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        ans.clear();
    }
}
