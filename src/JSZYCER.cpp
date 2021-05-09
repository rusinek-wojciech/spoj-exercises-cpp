/**
 * Szyfr Cezara
 */
#include <iostream>
using namespace std;

int main()
{
    string dane;
    while(getline(cin, dane))
    {
        size_t ile = dane.size();
        for (int i=0; i<ile; i++)
        {
            if ( dane[i] == 'X')
                dane[i] = 'A';
            else if ( dane[i] == 'Y')
                dane[i] = 'B';
            else if ( dane[i] == 'Z')
                dane[i] = 'C';
            else if ( dane[i] == ' ')
                dane[i] = ' ';
            else
                dane[i] = dane[i] + 3;
            cout<<dane[i];
        }
        cout<<endl;
    }
    return 0;
}