#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long long n,m,res=0,l,r,mid,pos1,pos2;
int main()
{
    freopen("vsseq.inp","r",stdin);
    freopen("vsseq.out","w",stdout);
    cin >> n >> m;
    for(long long i = 1; i <= n; i ++)
    {
        cin >> a[i];
    }
    for( long long i = 1; i <= n; i ++)
    {
        l = i + 1, r = n, pos1 = 1e9 + 1, pos2 = 0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]>=a[i]+m)
            {
                if (a[mid] == a[i] + m)
                {
                    pos1 = min(pos1, mid);
                }
                r = mid - 1;
            }
            if(a[mid]<a[i]+m)
                l = mid + 1;
        }
        l = i + 1, r = n;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] >= a[i] + m)
            {
                if (a[mid] == a[i] + m)
                {
                    pos2 = max(pos2, mid);

                }
                r = mid - 1;
            }
            if(a[mid]<a[i]+m)
                l = mid + 1;
        }
        if(pos1!= 1e9+1 && pos2!=0)
            res+=pos2-pos1+1;
    }
    if(res==0)
        res=-1;
    cout<<res;
}
