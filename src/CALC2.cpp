/**
 * Kalkulator 2
 */

#include <iostream>
using namespace std;

int main()
{
    char operation;
    int a,b;
    int tab[10] = {0};
    while(cin>>operation>>a>>b)
    {
        switch (operation)
        {
            case 'z':
                tab[a] = b;
                break;
            case '+':
                cout<<tab[a]+tab[b]<<endl;
                break;
            case '-':
                cout<<tab[a]-tab[b]<<endl;
                break;
            case '*':
                cout<<tab[a]*tab[b]<<endl;
                break;
            case '/':
                cout<<tab[a]/tab[b]<<endl;
                break;
            case '%':
                cout<<tab[a]%tab[b]<<endl;
                break;
            default:
                break;
        }
    }
    return 0;
}
 