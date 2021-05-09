/**
 * Harry and big doughnuts
 */
#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int c,k,w;
        cin>>c>>k>>w;
        if (k >= (w*c))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
} 