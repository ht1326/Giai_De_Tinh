#include <bits/stdc++.h>
using namespace std;
char s[1000002];
int Tren, Duoi, Tren1, Duoi1, i;
int main()
{
    ifstream fin ("VUOTSONG.INP");
    fin.getline(s,1000002);
    fin.close();
    ofstream fout ("VUOTSONG.OUT");
    Tren=0;
    Duoi=1;
    for (i=0; i<strlen(s); i++)
    {
        if (s[i]=='B')
        {
           Tren1=min(Tren+1, Duoi+2);
           Duoi1=min(Tren+2, Duoi+1);
        }

        if (s[i]=='L')
        {
            Tren1=min(Tren+1, Duoi+1);
            Duoi1=min(Tren+2, Duoi);
        }

        if (s[i]=='R')
        {
            Tren1=min(Tren, Duoi+2);
            Duoi1=min(Tren+1, Duoi+1);
        }
        Tren=Tren1;
        Duoi=Duoi1;
    }
    fout << Duoi;
    fout.close();
    return 0;
}
