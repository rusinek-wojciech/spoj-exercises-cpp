/**
 * Równanie kwadratowe
 */
#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    while (cin>>a>>b>>c)
    {
        float delta = (b*b)-(4*a*c);
        if (delta>=0)
        {
            if (delta==0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}