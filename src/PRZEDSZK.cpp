/**
 * Przedszkolanka
 */
#include <iostream>
using namespace std;

int main()
{
    int test;
    do
    {
        cin>>test;
    } while (test>20 || test<1);
    do
    {
        int A,B;
        do
        {
            cin>>A>>B;
        } while( A>30 || A<10 || B>30 || B<10);
        int tmp1 = A;
        int tmp2 = B;
        do
        {
            if(A>B)
            {
                B += tmp2;
            }
            else
            {
                if(A==B)
                {
                    break;
                }
                else
                {
                    A += tmp1;
                }
            }
        } while(A!=B);
        cout<<A<<endl;
        test--;
    } while(test != 0);
    return 0;
}
