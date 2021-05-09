/**
 * Tagi HTML
 */
#include <iostream>
#include <string>
using namespace std;

void szukaj(string &nz, char znak1, char znak2)
{
    size_t poz1 = nz.find(znak1);
    size_t poz2 = nz.find(znak2);
    do
    {
        string zmienna;
        size_t ile = poz2-poz1;
        zmienna.insert(0, nz, poz1+1, ile-1);
        nz.erase(poz1+1, ile-1);
        for (int i=0; i<ile-1; i++)
        {
            if(zmienna[i]>95)
                zmienna[i] = zmienna[i] - 32;
        }
        nz.insert(poz1+1, zmienna);

        poz1 = nz.find(znak1, poz1+1);
        poz2 = nz.find(znak2, poz2+1);

    } while ((poz1 != string::npos) && (poz2 != string::npos));
}

int main()
{
    string nz;
    while (getline(cin, nz))
    {
        szukaj(nz, '<', '>');
        cout<<nz<<endl;
    }
    return 0;
}
