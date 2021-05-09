/**
 * Gra Euklidesa
 */
#include <iostream>
using namespace std;

int main()
{

    unsigned int test;
    cin>>test;
    do
    {
        unsigned int a,b;
        cin>>a>>b;
        while ( a!=b) //18 12
        {
            if (a>b)
            {
                if (a-b<0)
                {
                    break;
                }
                else
                {
                    a -= b;
                }
            }
            else
            {
                if (b-a<0)
                {
                    break;
                }
                else
                {
                    b -= a;
                }
            }
        }
        cout<<a+b<<endl;
        test--;
    } while(test !=0);
    return 0;
}

