/**
 * Kalkulator
 */

#include <iostream>
using namespace std;

int main()
{
    int test;
    char operacja;
    int A, B;
    while (cin>>operacja>>A>>B)
    {
        switch (operacja)
        {
            case '+':
                cout<<A+B<<endl;
                break;
            case '-':
                cout<<A-B<<endl;
                break;
            case '*':
                cout<<A*B<<endl;
                break;
            case '/':
                cout<<A/B<<endl;
                break;
            case '%':
                cout<<A%B<<endl;
                break;
        }
    }
    return 0;
}