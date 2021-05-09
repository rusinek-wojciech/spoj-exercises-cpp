/**
 * Dwumiany
 */
#include <iostream>

using namespace std;



int main()
{
    int r;
    int counter;
    int result;
    int prime[229]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83,
                       89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197,
                       199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317,
                       331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449,
                       457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593,
                       599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727,
                       733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863,
                       877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};
    int numerator[229];
    int denominator[229];
    int i;
    int t;


    cin>>t;
    for(int o=1; o<=t; o++)
    {

        int n,k;
        cin>>n>>k;
        if ( (k == 0) || (n == k) )
        {
            cout << "1" << endl;
        }else

        if((n-k)>(n/2))
        {
            k=n-k;

        }
        if ( (k != 0) && (n != k) )
        {

            for (int i=0; i<229; i++)
            {
                numerator[i] = denominator[i] = 0;
            }

            int roznica= n-k;


            for(int j=1; j<=roznica; j++)
            {
                int b=0;
                counter=k+j;
                i=0;

                while(counter>=prime[i])
                {
                    if(counter%prime[i] == 0)
                    {
                        numerator[i]+=1;
                        counter=counter/prime[i];

                        i=0;
                    }else i++;


                    b++;
                }

            }

            roznica= n-k;

            r=0;
            for(int j=roznica; j>1; j--)
            {

                i=0;

                while(roznica>=prime[i])
                {

                    if(roznica%prime[i] == 0)
                    {
                        denominator[i]+=1;
                        roznica=roznica/prime[i];

                        i=0;
                    }else i++;

                }

                r++;   roznica=n-k-r;


            }

            result=1;
            for(int r=0; r<=229; r++)
            {
                if(numerator[r] == denominator[r])
                {
                    numerator[r]=0;
                }else
                if(numerator[r]>denominator[r])
                {
                    numerator[r]-=denominator[r];
                }else numerator[r]=denominator[r]-numerator[r];

                if(numerator[r]>0)
                {
                    for(int z=1; z<=numerator[r]; z++)
                    {
                        result *=prime[r];
                    }
                }

            }
            cout<<result<<endl;
        }
    }
    return 0;
}

