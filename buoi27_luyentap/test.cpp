#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int tuso=1;
    int mauso=1;
    cin>>b>>a;
    for(int i=1;i<=b;i++)
    {
        tuso=tuso*i;
    }
    for(int i=1;i<=b-a;i++)
        mauso=mauso*i;
    for(int i=1;i<=a;i++)
        mauso=mauso*i;
    cout<<tuso<<endl;
    tuso=tuso/mauso;
    cout<<tuso;

}

