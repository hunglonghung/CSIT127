#include<bits/stdc++.h>
using namespace std;
long long n,k,cnt=0,ans=1,res,range,lastplace;
long long a[200001];
vector<long long> dodaingay;
vector <long long> c;
int main()
{
    freopen("weel.inp","r",stdin);
    freopen("weel.out","w",stdout);
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            cnt++;
            c.push_back(i);
        }
    }
    if(cnt>k)
    {
        cout<<"-1";
        return 0;
    }
    else if(cnt==0)
    {
        cout<<"0";
        return 0;
    }
    else
    {
        lastplace=c[c.size()-1];
        res=k-cnt;
        for(long long i=0;i<c.size()-1;i++)
        {
            dodaingay.push_back(c[i+1]-c[i]-1);

        }
        sort(dodaingay.begin(),dodaingay.end());
        ans=cnt*2;
        for(long long i=0;i<dodaingay.size();i++)
            if (res >= dodaingay[i])
            {
                res-=dodaingay[i];
                ans-=2;
            }

        if(n-lastplace<=res)
            ans--;
        cout<<ans;
    }

}
