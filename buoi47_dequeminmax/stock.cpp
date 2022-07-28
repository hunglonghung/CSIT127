#include<bits/stdc++.h>
using namespace std;
deque<long long>qumax;
deque<long long>qumin;
long long a[100001];
long long n,p,start=1,ans=0;
int main()
{
    freopen("stock.inp","r",stdin);
    freopen("stock.out","w",stdout);
    cin>>n>>p;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=n;i++)
    {
        while(!qumax.empty() && a[qumax.back()]<=a[i])
            qumax.pop_back();
        while(!qumin.empty() && a[qumin.back()]>=a[i])
            qumin.pop_back();
        qumax.push_back(i);
        qumin.push_back(i);
        while(a[qumax.front()]-a[qumin.front()]>p)
        {
            if(qumax.front()<qumin.front())
            {
                start=qumax.front()+1;
                qumax.pop_front();
            }
            else
            {
                start=qumin.front()+1;
                qumin.pop_front();
            }
        }
        ans=max(ans,i-start+1);
    }
    cout<<ans;


}
