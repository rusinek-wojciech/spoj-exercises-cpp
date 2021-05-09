/**
 * Pesel
 */

#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    do
    {
        long long pesel;
        int tab[11], suma=0;
        cin>>pesel;
        for (int i=10; i>=0; i--)
        {
            tab[i] = pesel%10;
            pesel /= 10;
        }
        for (int i=0; i<11; i++)
        {
            switch (i)
            {
                case 0:
                case 4:
                case 8:
                case 10:
                    suma += tab[i];
                    break;
                case 1:
                case 5:
                case 9:
                    suma += tab[i]*3;
                    break;
                case 2:
                case 6:
                    suma += tab[i]*7;
                    break;
                case 3:
                case 7:
                    suma+= tab[i]*9;
                    break;
            }
        }
        if (suma%10 == 0)
            cout<<"D"<<endl;
        else
            cout<<"N"<<endl;
        test--;
    } while (test != 0);
    return 0;
}
