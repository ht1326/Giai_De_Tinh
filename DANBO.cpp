#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int x[100005];
int n, m, Dau, Giua, Cuoi, VT, i;
bool KT(int k)
{
    int i, j, d;
    j=1;
    d=1;
    for (i=2; i<=n; i++)
        if (x[i]>=x[j]+k)
        {
            j=i;
            d++;
            if (d==m) return true;
        }
    return false;
}
int main()
{
    ifstream fin ("DANBO.INP");
    fin >> n >> m;
    for (i=1; i<=n; i++) fin >> x[i];
    fin.close();
    ofstream fout ("DANBO.OUT");
    Dau=1;
    Cuoi=1e9;
    do
    {
        Giua=(Dau+Cuoi)/2;
        if (KT(Giua))
        {
            VT=Giua;
            Dau=Giua+1;
        } else Cuoi=Giua-1;
    } while (Dau<Cuoi);
    fout << VT;
    fout.close();
    return 0;
}
