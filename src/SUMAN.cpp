/**
 * Suma
 */
#include <iostream>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        int x;
        int sum = 0;
        std::cin>>x;
        while (x != 0)
        {
            sum += x;
            x--;
        }
        std::cout<<sum<<std::endl;
    }
    return 0;
}