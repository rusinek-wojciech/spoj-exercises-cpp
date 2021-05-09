/**
 * Proste dodawanie
 */
#include <iostream>
using namespace std;

int main()
{
    int test, suma, ile;
    cin>>test;
    do
    {
        cin>>ile;
        int tab[ile];
        suma=0;
        for (int i=0; i<ile; i++)
        {
            cin>>tab[i];
            suma+=tab[i];
        }
        test--;
        cout<<suma<<endl;
    } while(test!=0);


    return 0;
} 