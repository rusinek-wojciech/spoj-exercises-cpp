/**
 * Transponowanie macierzy
 */

#include <iostream>
using namespace std;

int main()
{
    unsigned int m,n;
    cin>>m>>n;
    int tab[m][n];
    for (int j=0; j<m; j++)
    {
        for (int i=0; i<n; i++)
        {
            cin>>tab[j][i];
        }
    }
    for (int j=0; j<n; j++)
    {
        for (int i=0; i<m; i++)
        {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
