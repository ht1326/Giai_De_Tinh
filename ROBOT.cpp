#include <bits/stdc++.h>
using namespace std;
long long int a[1000001], b[1000001], c[1000001], d[1000001], m, n, KQ, s, t, i, j;
int main()
{
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
    scanf("%d%d", &n, &m);
    for (i=1; i<=n; i++) scanf("%lld", &a[i]);
    for (j=1; j<=m; j++) scanf("%lld", &b[j]);
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    j=1;
    for (i=1; i<=m; i++)
    {
        s+=b[i];
        while (b[i]>a[j] && j<=n)
        {
            c[j]=i-1;
            d[j]=s-b[i];
            j++;
        }
        while (i==m && j<=n)
        {
            c[j]=m;
            d[j]=s;
            j++;
        }
    }
    KQ=0;
    for (i=1; i<=n; i++)
    {
        t=(a[i]*c[i]-d[i])+((s-d[i])-a[i]*(m-c[i]));
        KQ=max(KQ,t);
    }
    printf("%lld", KQ);
    return 0;
}
