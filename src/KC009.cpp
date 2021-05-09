/**
 * Odwracanie wyrazów
 */
#include <iostream>
using namespace std;

int main()
{
    string slowo;
    while(cin>>slowo)
    {
        size_t ile = slowo.size();
        for (int i=ile-1; i>=0; i-- )
        {
            cout<<slowo[i];
        }
        cout<<endl;
    }
    return 0;
}