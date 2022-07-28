#include<bits/stdc++.h>
using namespace std;
int hang1[100001];
int hang2[100001];
int hang3[100001];
int a,b,c;
int h1=0,h2=0,h3=0;
int a1=0,a2=0,a3=0;
void maxheight()
{
    if(h1>=h2&& h1>=h3)
    {
        a1++;
        h1-=hang1[a1];
    }
    if(h2>=h1&& h2>=h3)
    {
        a2++;
        h2-=hang2[a2];
    }
    if(h3>=h1&& h3>=h2)
    {
        a3++;
        h3-=hang3[a3];
    }

}
void solve()
{
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        cin>>hang1[i];
        h1+=hang1[i];
    }
    for(int i=1;i<=b;i++)
    {
        cin>>hang2[i];
        h2+=hang2[i];
    }
    for(int i=1;i<=c;i++)
    {
        cin>>hang3[i];
        h3+=hang3[i];
    }
    if(h1==h2&&h2==h3)
    {
        cout<<h1;
        return;
    }
    while(h1!=h2&&h2!=h3)
    {
        maxheight();
    }
    cout<<h1;

}
int main()
{
    freopen("equalstack.inp","r",stdin);
    freopen("equalstack.out","w",stdout);
    solve();
}
