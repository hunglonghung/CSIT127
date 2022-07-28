#include<bits/stdc++.h>
using namespace std;
vector < int > A[100];
int k;
int B[100],saveMoney[100];
int main()
{
    freopen("coupon.inp","r",stdin);
    freopen("coupon.out","w",stdout);
    int ntest,n,m;
    cin >> ntest;
    while (ntest--)
    {
        int sum=0;
        cin >> n >> m;
        for (int i = 1; i <= n; ++i)
        {
            cin >> k;
            A[i].resize(k); // Tao ra k vi tri rong trong vector tu 0 toi k - 1
            for (int j = 0; j < k; ++j)
                cin >> A[i][j]; // Khi cin vector thi bat buoc phai tao truoc cac o nho rong
            cin >> saveMoney[i]; // So tien tiet kiem duoc cua chuong trinh thu i
        }

        for (int i = 1; i <= m; ++i)
            cin >> B[i]; // So luong coupon moi loai cua ban Mai
        for(int i=1;i<=n;i++) // Duyet cac chuong trinh tu 1 toi N
        {
            int minn=B[A[i][0]];

            for(int j=0;j<A[i].size(); ++j) // Duyet cac coupon phai su dung cua chuong trinh thu i
            {

                minn = min (minn,B[A[i][j]]);// So luong coupon thu j cua chuong trinh i ma Mai dang so hu
            }
            sum=sum+saveMoney[i]*minn;
        }
        cout<<sum<<endl;
    }


}

