""#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int a[1000005];
int n, k, d, MAX, i;
int main()
{
    ifstream fin ("PIXEL.INP");
    ofstream fout ("PIXEL.OUT");
    fin >> n;
    d=0;
    for (i=1; i<=n; i++)
    {
        fin >> k;
        if (a[k]==0) d++;
        a[k]++;
        MAX=max(MAX,a[k]);
    }
    fout << d << endl << MAX;
    fin.close();
    fout.close();
    return 0;
}
