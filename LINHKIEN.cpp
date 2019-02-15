#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int a[1000005];
int n, k, ANS, i;
int main()
{
    ifstream fin ("LINHKIEN.INP");
    ofstream fout ("LINHKIEN.OUT");
    fin >> n;
    for (i=1; i<=n; i++) fin >> a[i];
    ANS=1000010;
    for (i=1; i<=n; i++)
    {
        fin >> k;
        ANS=min(ANS,a[i]/k);
    }
    fout << ANS;
    fin.close();
    fout.close();
    return 0;
}

