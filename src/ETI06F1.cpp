/**
 * Pole pewnego koła
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float r,d;
    do
    {
        cin>>r>>d;
    } while (d>2000 || d<1 || d>2*r || r>1000 || r<1);
    cout<<setprecision(10)<<((r*r)-((d*d)/4))*3.141592654<<endl;
    return 0;
}