/**
 * Nowa działka
 */
#include <iostream>
using namespace std;

int main()
{
    int D;
    cin>>D;
    do
    {
        int X;
        cin>>X;
        cout<<X*X<<endl;
        D--;
    } while (D!=0);

    return 0;
}
