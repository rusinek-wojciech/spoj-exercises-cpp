/**
 * Równanie liniowe
 */
#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if (a==0 && c-b==0)
        cout<<"NWR"<<endl;
    else if (a==0)
        cout<<"BR"<<endl;
    else
    {
        int x = (c-b)/a;
        int j = 0;
        while ( x != 0)
        {
            x = x/10;
            j++;
        }
        cout.precision(2);
        cout<<fixed<<(c-b)/a<<endl;
    }

    return 0;
}
