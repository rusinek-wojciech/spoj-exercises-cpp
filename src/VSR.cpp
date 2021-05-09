/**
 * Prędkośc średnia
 */
#include <iostream>
using namespace std;

int main()
{
    int A,B, ile;
    cin>>ile;

    for (int i=1; i<=ile; i++)
    {
        cin>>A>>B;
        cout<<2*A*B/(A+B)<<endl;
    }

    return 0;
}
 