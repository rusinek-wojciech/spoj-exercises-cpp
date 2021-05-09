/**
 * Konkurs pseudomatematyczny
 */
#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while (test!=0)
    {
        int ilosc;
        cin>>ilosc;
        int tab[ilosc];
        for (int i=0; i<ilosc; i++)
            cin>>tab[i];
        bool srt;
        do
        {
            srt = false;
            for (int i=ilosc-2; i>=0; i--)
            {
                if (tab[i+1] < tab[i])
                {
                    int tmp = tab[i];
                    tab[i] = tab[i+1];
                    tab[i+1] = tmp;
                    srt = true;
                }
            }
        } while (srt);

        int licznik = 1;
        cout<<tab[ilosc-1]<<" ";
        for (int i=0; i<ilosc-1; i++)
        {
            if (tab[ilosc-1] == tab[i])
            {
                cout<<tab[i]<<" ";
                licznik++;
            }
        }
        for (int i=0; i<ilosc - licznik; i++)
            cout<<tab[i]<<" ";
        cout<<endl;
        test--;
    }
    return 0;
}
