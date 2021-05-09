/**
 * StringMerge
 */
#include <iostream>
using namespace std;

int main()
{
    int ile;
    cin>>ile;
    while(ile--)
    {
        string a,b;
        cin>>a>>b;
        size_t dl_a = a.size();
        size_t dl_b = b.size();
        if (dl_a >= dl_b)
        {
            for (int i=0; i<dl_b; i++)
            {
                cout<<a[i];
                cout<<b[i];
            }
        }
        else
        {
            for (int i=0; i<dl_a; i++)
            {
                cout<<a[i];
                cout<<b[i];
            }
        }
        cout<<endl;
    }
    return 0;
}