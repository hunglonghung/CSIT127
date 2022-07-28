#include<bits/stdc++.h>
using namespace std;
long long n,res=0,l,r,mid,dis,maxpos,minpos;
long long a[1001];
void enter()
{
    freopen("baseball.inp","r",stdin);
    freopen("baseball.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
}
void solve()
{
    for(long long x=1;x<=n-2;x++)
    {
        for(long long y=x+1;y<=n;y++)
        {
            long long left=a[y]-a[x];
            long long right=2*(a[y]-a[x]);
            minpos=0;
            maxpos=0;
            l=y+1,r=n;
            while(l<=r)
            {
                mid=(l+r)/2;
                dis=a[mid]-a[y];
                if(dis>=left)
                {
                    if(dis<=right)
                        minpos=mid;
                    r=mid-1;
                }
                else
                    l=mid+1;
            }
            l=y+1,r=n;
            while(l<=r)
            {
                mid=(l+r)/2;
                dis=a[mid]-a[y];
                if(dis<=right)
                {
                    if(dis>=left)
                        maxpos=mid;
                    l=mid+1;
                }
                else
                    r=mid-1;
            }
            if(maxpos!=0&&minpos!=0)
                res+=(maxpos-minpos+1);
        }
    }
    cout<<res;
}
int main()
{
    enter();
    solve();
}
