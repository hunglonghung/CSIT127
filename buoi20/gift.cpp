#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b , c,d;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d<0)
        cout<<"vo nghiem";
    if(d==0)
        cout<<"1 nghiem duy nhat :"<<(-b+sqrt(d))/(2*a);
    if(d>0)
        cout<<"2 nghiem phan biet :"<<(-b+sqrt(d))/(2*a)<<(-b-sqrt(d))/(2*a);
}
