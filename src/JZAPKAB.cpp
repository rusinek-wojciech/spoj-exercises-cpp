/**
 * Kabalistyczny zapis daty
 */
#include <iostream>
using namespace std;

int main()
{
    string tekst;
    cin>>tekst;
    int wynik=0;
    for (int i=0; i<tekst.size(); i++)
    {
        switch (tekst[i])
        {
            case 'a':
                wynik += 1;
                break;
            case 'b':
                wynik += 2;
                break;
            case 'c':
                wynik += 3;
                break;
            case 'd':
                wynik += 4;
                break;
            case 'e':
                wynik += 5;
                break;
            case 'f':
                wynik += 6;
                break;
            case 'g':
                wynik += 7;
                break;
            case 'h':
                wynik += 8;
                break;
            case 'i':
                wynik += 9;
                break;
            case 'k':
                wynik += 10;
                break;
            case 'l':
                wynik += 20;
                break;
            case 'm':
                wynik += 30;
                break;
            case 'n':
                wynik += 40;
                break;
            case 'o':
                wynik += 50;
                break;
            case 'p':
                wynik += 60;
                break;
            case 'q':
                wynik += 70;
                break;
            case 'r':
                wynik += 80;
                break;
            case 's':
                wynik += 90;
                break;
            case 't':
                wynik += 100;
                break;
            case 'v':
                wynik += 200;
                break;
            case 'x':
                wynik += 300;
                break;
            case 'y':
                wynik += 400;
                break;
            case 'z':
                wynik += 500;
                break;
            default:
                wynik += 0;
                break;
        }
    }
    cout<<wynik<<endl;
    return 0;
}
