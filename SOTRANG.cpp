#include <bits/stdc++.h>
using namespace std;
int a[10];
int n, i, j, k;
int main()
{
    ifstream fin ("SOTRANG.INP");
    fin >> n;
    fin.close();
    ofstream fout ("SOTRANG.OUT");
    for (i=1; i<=n; i++)
    {
        j=i;
        while (j!=0)
        {
            k=j%10;
            a[k]++;
            j=j/10;
        }
    }
    for (i=0; i<=9; i++) fout << i << ' ' << a[i] << endl;
    fout.close();
    return 0;
}
