/**
 * Współliniowość punktów
 */

#include <iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    do
    {
        int tab[6];
        for (int i=0; i<6; i++)
            cin>>tab[i];
        if  ( ((tab[0] == tab[2]) && (tab[2] == tab[4]) ) ||
              ( (tab[1] == tab[3]) && (tab[3] == tab[5]) ))
        {
            cout<<"TAK"<<endl;
        }
        else
        {
            int a = (tab[3]-tab[1])/(tab[2]-tab[0]);
            int b = tab[1]-(tab[0]*a);
            if (tab[5] == (tab[4]*a)+b)
                cout<<"TAK"<<endl;
            else
                cout<<"NIE"<<endl;
        }
        test--;
    } while (test !=0 );
    return 0;
}