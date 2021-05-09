/**
 * Stos
 */
#include <iostream>
using namespace std;

int main()
{
    int tab[10];
    char opr;
    int i=0;
    while (cin>>opr)
    {
        switch (opr)
        {
            case '+':
                int x;
                cin>>x;
                if (i>=10)
                    cout<<":("<<endl;
                else
                {
                    tab[i] = x;
                    i++;
                    cout<<":)"<<endl;
                }
                break;
            case '-':
                if (i<1)
                    cout<<":("<<endl;
                else
                {
                    cout<<tab[i-1]<<endl;
                    i--;
                }
                break;
            default:
                cout<<":("<<endl;
                break;
        }
    }
    return 0;
}