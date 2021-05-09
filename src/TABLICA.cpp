#include <iostream>
using namespace std;

int main()
{
    int tmp;
    int *tab;
    int i = 0;
    while(cin>>tmp)
    {
        int *temp = new int [i];
        for (int j = 0; j < i; j++)
        {
            temp[j] = tab[j];
        }
        tab = temp;
        tab[i] = tmp;
        i++;
    }
    for (int n=0; n<i; n++)
    {
        cout<<tab[i-n-1]<<" ";
    }
    return 0;
}