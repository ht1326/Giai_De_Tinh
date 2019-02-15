#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int a[255][255], b[255][255];
int n, Min, Max, i, j;
int main()
{
    ifstream fin ("GAPGIAY.INP");
    ofstream fout ("GAPGIAY.OUT");
    fin >> n;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++) fin >> a[i][j];
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++) b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
    Max=0;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
        {
            Min=300;
            Min=min(b[i][j],b[i][n]-b[i][j]);
            Min=min(b[n][j]-b[i][j],Min);
            Min=min(b[n][n]-b[i][n]-b[n][j]+b[i][j],Min);
            Max=max(Min,Max);
        }
    fout << Max;
    fin.close();
    fout.close();
    return 0;
}
