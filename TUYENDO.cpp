#include <bits/stdc++.h>
using namespace std;
int a[100001], b[1000001];
int n, Dau, Giua, Cuoi, i, j, KQ;
int main()
{
    freopen("TUYENDO.INP", "r", stdin);
    freopen("TUYENDO.OUT", "w", stdout);
    scanf("%d", &n);
    for (i=1; i<=n; i++) scanf("%d", &a[i]);
    j=1;
    b[j]=a[j];
    for (i=2; i<=n; i++)
    {
        Dau=0;
        Cuoi=j+1;
        do
        {
            Giua=(Dau+Cuoi)/2;
            b[Dau+1]=min(b[Dau+1],a[i]);
            if (b[Giua]<a[i]) Dau=Giua;
            else Cuoi=Giua;
        } while (Dau+1<Cuoi);
        if (Dau+1>j)
        {
            j++;
            b[j]=a[i];
        } else b[Dau+1]=min(b[Dau+1],a[i]);
    }
    KQ=n-j;
    cout << KQ;
    return 0;
}
