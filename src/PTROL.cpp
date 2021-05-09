/**
 * ROL
 */
#include <iostream>
using namespace std;

int main()
{

    int test;
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

        for (int i=1; i<ile; i++)
        {
            cout<<tab[i]<<" ";
        }
        cout<<tab[0]<<endl;
        test--;
    } while(test !=0);

    return 0;
}