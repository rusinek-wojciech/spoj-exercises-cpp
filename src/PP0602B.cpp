/**
 * tabelki liczb
 */
#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while (test!=0)
    {
        int m,n;
        cin>>m>>n;
        int tab[m][n];
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                cin>>tab[i][j];
            }
        }
        cout<<endl;
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (i==0 && j==n-1)
                {
                    cout<<tab[i+1][j]<<" ";
                }
                else if (i==m-1 && j==0)
                {
                    cout<<tab[i-1][j]<<" ";
                }
                else if (i==0)
                {
                    cout<<tab[i][j+1]<<" ";
                }
                else if (i==m-1)
                {
                    cout<<tab[i][j-1]<<" ";
                }
                else if (j==0)
                {
                    cout<<tab[i-1][j]<<" ";
                }
                else if (j==n-1)
                {
                    cout<<tab[i+1][j]<<" ";
                }
                else
                {
                    cout<<tab[i][j]<<" ";
                }
            }
            cout<<endl;
        }
        test--;
    }
    return 0;
}
 