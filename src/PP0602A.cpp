/**
 * Parzyste nieparzyste
 */

#include <iostream>
using namespace std;

int main()
{
    unsigned int test;
    cin>>test;
    do
    {
        int ile;
        cin>>ile;
        int tab[ile];
        for (int i=0; i<ile; i++)
        {
            cin>>tab[i];
        }
        for (int i=1; i<ile; i+=2)
        {
            cout<<tab[i]<<" ";
        }
        for (int i=0; i<ile; i+=2)
        {
            cout<<tab[i]<<" ";
        }
        cout<<endl;
        test--;
    } while (test != 0);
    return 0;
}