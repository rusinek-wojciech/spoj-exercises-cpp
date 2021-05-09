/**
 * Nierówność trójkąta
 */

#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    while (cin>>a>>b>>c)
    {
        bool wartosc = 1;
        if (a>=b+c)
            wartosc = 0;
        if (b>=a+c)
            wartosc = 0;
        if (c>=a+b)
            wartosc = 0;
        cout<<wartosc<<endl;
    }

    return 0;
}