/**
 * Zliczanie wystąpień
 */
#include <iostream>
using namespace std;

bool podajdane()
{
    int szukana;
    int ilosc;
    int ile = 0;
    if (cin >> szukana >> ilosc)
    {
        int* tab;
        tab = new int[ilosc];
        for (int i = 0; i < ilosc; i++)
        {
            cin >> tab[i];
            if (tab[i] == szukana)
            {
                ile++;
            }
        }
        cout << ile << endl;
        return 1;
    }
    else
        return 0;
}

int main()
{
    while (podajdane())
    {}
    return 0;
} 