/**
 * Piramidka
 */
#include <iostream>

int main()
{
    int N;
    std::cin>>N;
    std::string word;
    std::cin>>word;
    for (int i=(N/2); i>=0; i--)
    {
        std::string zm = word;
        for (int j=0; j<i; j++)
        {
            zm[j] = '.';
            zm[N-j-1] = '.';
        }
        std::cout<<zm<<std::endl;
    }
    return 0;
}