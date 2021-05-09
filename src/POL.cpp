/**
 * Polowa
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int test;
    cin>>test;
    do
    {
        string dane;
        cin>>dane;
        size_t dlugosc = dane.size();
        dlugosc /= 2;
        dane.erase(dlugosc,dlugosc);
        cout<<dane<<endl;
        test--;
    } while(test !=0);
    return 0;
}