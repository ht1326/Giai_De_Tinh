#include <bits/stdc++.h>
using namespace std;
long long int a[45005], b[100][600];
int n, Dau, Cuoi, Giua, VT, Doan, RES, s, i, j;
int main()
{
    freopen("THADIEU.INP", "r", stdin);
    freopen("THADIEU.OUT", "w", stdout);
    scanf("%d", &n);
    for (i=1; i<=n; i++) scanf("%lld", &a[i]);
    for (i=1; i<=n; i++)
    {
        s=0;
        Doan=(i-1)/500+1;
        VT=(i-1)%500+1;
        for (j=1; j<=Doan; j++)
        {
            Dau=1;
            if (j<Doan) Cuoi=500;
            else Cuoi=VT-1;
            RES=Cuoi+1;
            while (Dau<=Cuoi)
            {
                Giua=(Dau+Cuoi)/2;
                if (b[j][Giua]<a[i]) Dau=Giua+1;
                else
                {
                    RES=Giua;
                    Cuoi=Giua-1;
                }
            }
            s+=RES-1;
        }
        printf("%d\n", i-s);
        for (j=VT; j>RES; j--) b[Doan][j]=b[Doan][j-1];
        b[Doan][RES]=a[i];
    }
    return 0;
}
