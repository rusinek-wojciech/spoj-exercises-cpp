/**
 * Systemy pozycjne
 */
#include <iostream>
using namespace std;

void konw (int a, int b)
{
    int tab[10];
    int i=0;
    while (a!=0)
    {
        tab[i] = a%b;
        a /=b;
        i++;
    }
    for (int j=i-1; j>=0; j--)
    {
        switch(tab[j])
        {
            case 10:
                cout<<"A";
                break;
            case 11:
                cout<<"B";
                break;
            case 12:
                cout<<"C";
                break;
            case 13:
                cout<<"D";
                break;
            case 14:
                cout<<"E";
                break;
            case 15:
                cout<<"F";
                break;
            default:
                cout<<tab[j];
        }
    }
}

int main()
{
    int test;
    cin>>test;
    while (test!=0)
    {
        int a;
        cin>>a;
        konw(a, 16);
        cout<<" ";
        konw(a, 11);
        cout<<endl;
        test--;
    }
    return 0;
}
 