#include<bits/stdc++.h>
using namespace std;
int n,s,cnt,cnt_best,sum;
int mark_best[21];
int mark[21];
int a[21];

int maxmoney[21];
void enter()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)
        cin>>a[i];
}
void create()
{
    maxmoney[n]= a[n];
    for(int i=n-1;i>=0;i--)
        maxmoney[i]=max(maxmoney[i+1],a[i]);

}
void update()
{
    if(sum== s&&cnt<cnt_best)
    {
        cnt_best = cnt;
        for(int i=1;i<=n;i++)
            mark_best[i]=mark[i];
    }
}

void ghinghiem()
{
    if(cnt_best==n+1)
        cout<<"-1";
    else
    {
        cout<<cnt_best<<endl;
        for(int i=1;i<=n;i++)
            if(mark_best[i])
            cout<<a[i]<<" ";
    }
}
void recur(int i)
{
    if(cnt +(s - sum) / maxmoney[i]>= cnt_best)
        return;
    for(int j=0;j<=1;j++)
    {
        sum=sum+a[i]*j;
        mark[i]=j;
        cnt+=j;
        if(i==n)
            update();
        else
            if(sum<=s)
                recur(i+1);
        sum-=a[i]*j;
        cnt-=j;
    }
}
int main()
{
    enter();
    create();
    recur(1);
    ghinghiem();
    return 0;
}
