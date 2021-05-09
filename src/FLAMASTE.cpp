/**
 * Flamaster
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string slowo;
        cin>>slowo;
        size_t ile = slowo.size();
        int licznik = 1;

        if (ile==1)
            cout<<slowo;
        else
        {
            cout<<slowo[0];
            for (int i=1; i<ile-1; i++)
            {
                if ((slowo[i] == slowo[i-1]) && (slowo[i] == slowo[i+1]))
                {
                    licznik++;
                }
                else
                {
                    if (licznik>=2)
                    {
                        cout<<licznik+1;
                    }
                    else
                    {
                        cout<<slowo[i];
                    }
                    licznik = 1;
                }
            }
            if (licznik>=2)
                cout<<licznik+1;
            else
                cout<<slowo[ile-1];
        }
        cout<<endl;
    }
    return 0;
}