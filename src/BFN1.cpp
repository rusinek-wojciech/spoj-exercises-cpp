/**
 * Zabawne Dodawanie Piotrusia
 */
#include <iostream>
using namespace std;

int Rekurs (int i)
{
    if (i==0)
        return 1;
    return Rekurs(i-1)*10;
}


int Dlugosc(int x)
{
    int i=0;
    while (x != 0)
    {
        x /= 10;
        i++;
    }
    return i;
}

int Wykonaj(int x, int ile)
{
    int tab[ile];
    int i=0;
    while (x != 0)
    {
        tab[i] = x%10;
        x /= 10;
        i++;
    }
    for (int i=0; i<ile; i++)
    {
        x = x+tab[i]*Rekurs(ile-i-1);

    }
    return x;
}
int main()
{
    int test;
    cin>>test;
    do
    {
        int liczba, odwr=0, dlug;
        cin>>liczba;
        int licznik = -1;
        do
        {
            liczba += odwr;
            dlug = Dlugosc(liczba);
            odwr = Wykonaj(liczba, dlug);
            licznik++;
        } while (liczba - odwr != 0);
        cout<<liczba<<" "<<licznik<<endl;
        test--;
    } while (test != 0);
    return 0;
}
