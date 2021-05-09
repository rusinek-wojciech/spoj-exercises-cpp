/**
 * Problem Collatza
 */

#include <iostream>
using namespace std;

int Wynik (int x, int licznik)
{
    if (x==1)
        return licznik;
    if (x%2 == 0)
        return Wynik(x/2, ++licznik);
    if (x%2 != 0)
        return Wynik(3*x+1, ++licznik);
}
int main()
{
    unsigned int test;
    cin>>test;
    do
    {
        int liczba;
        cin>>liczba;
        int licznik=0;
        cout<<Wynik(liczba, licznik)<<endl;
        test--;
    } while(test !=0);
    return 0;
}