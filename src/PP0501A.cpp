/**
 * NWD
 */
#include <iostream>
using namespace std;

int NWD (int &A, int &B)
{
    while (A != B)
    {
        if(A < B)
            B -= A;
        else
            A -= B;
    }
    return A;
}
int main()
{
    int test, A, B;
    cin>>test;
    do
    {
        cin>>A>>B;
        cout<<NWD(A, B)<<endl;
        test--;
    } while(test != 0);
    return 0;
}