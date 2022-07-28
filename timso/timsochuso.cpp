#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    int ans=0,res=0;
    char s[8];
    for(int i=1;i<=8;i++)
        for(int j='1';j<='6';j++)
         {
                 s[i]=j;
                if(s[i]=='6')
                    cnt++;
                if(s[i]=='1')
                    ans++;
                if(cnt==2&&ans==2)
                    res++;

         }
    cout<<res;






}
