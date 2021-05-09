/**
 * Obżartuchy
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n,m;
        cin>>n>>m;
        int tab[n];
        float wynik = 0;
        for (int i=0; i<n; i++)
        {
            cin>>tab[i];
            wynik += 86400 / tab[i];
        }
        wynik /= m;
        cout<<ceil(wynik)<<endl;
    }
    return 0;
}