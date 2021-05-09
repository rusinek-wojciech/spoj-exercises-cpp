/**
 * Liczby Pierwsze
 */
#include <iostream>
using namespace std;

string Pierwsza(int x)
{
    if (x<2)
        return "NIE";
    for (int i=2; i<x; i++)
    {
        if (x%i == 0)
            return "NIE";
    }
    return "TAK";
}

int main()
{
    unsigned int test;
    cin>>test;
    do
    {
        int liczba;
        cin>>liczba;
        cout<<Pierwsza(liczba)<<endl;
        test--;
    } while(test !=0);
    return 0;
}