/**
 * Tablice
 */
#include <iostream>
using namespace std;


int main()
{
    int ile;
    cin>>ile;
    do
    {
        int ilosc;
        cin>>ilosc;
        int tab[ilosc];
        for (int i=0; i<ilosc; i++)
        {
            cin>>tab[i];
        }
        for (int i=ilosc-1; i>=0; i--)
        {
            cout<<tab[i]<<" ";
        }
        ile--;
    } while(ile!=0);
    return 0;
}