/**
 * Suma
 */
#include <iostream>
using namespace std;

int main()
{
    int liczba;
    int suma=0;
    while(cin>>liczba)
    {
        suma += liczba;
        cout<<suma<<endl;
    }
    return 0;
}