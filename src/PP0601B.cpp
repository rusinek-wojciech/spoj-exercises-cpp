/**
 * Podzielność
 */

#include <iostream>
using namespace std;

int main()
{

    int test;
    cin>>test;
    do
    {
        int n,x,y;
        cin>>n>>x>>y;
        int j=0;
        int tab[n/x];
        for(int i=0; i<n; i++)
        {
            if (i%x == 0 && i%y != 0)
            {
                tab[j] = i;
                cout<<i<<" ";
                j++;
            }
        }
        cout<<endl;
        test--;
    } while(test !=0);
    return 0;
}