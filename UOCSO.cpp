#include <bits/stdc++.h>

using namespace std;
long long int n,m,j,i,ans,d;
int main()
{
    freopen("UOCSO.INP","r",stdin);
    freopen("UOCSO.OUT","w",stdout);
    scanf("%lld",&n);
    m=ans=1;
    for(i=1;i<=n;i++) m=m*i;
    j=1;
    while(m>1 || j<=n)
    {
        j++;
        d=0;
        while(m%j==0){
            m=m/j;
            d++;
        }
        ans=ans*(d+1);
     //   printf("%lld",m);
      //  if(j==3) m=0;
    }
    printf("%lld",ans);
    return 0;
}
