/**
 * Test 3
 */
#include <iostream>
using namespace std;

int main()
{
    int a;
    int i=0;
    int tmp=42;
    while(cin>>a)
    {
        if (i<3)
            cout<<a<<endl;
        if (a==42 && tmp != 42)
            i++;
        tmp=a;

    }
    return 0;
} 