/**
 * Sort 1
 */
#include <iostream>
using namespace std;

class Punkt
{
public:
    string nazwa;
    int x;
    int y;
    int odl;
    Punkt()
    {
        cin>>nazwa>>x>>y;
    };
    void policz()
    {
        odl = (x*x)+(y*y);
    };
    void pokaz()
    {
        cout<<nazwa<<" "<<x<<" "<<y<<endl;
    };
};

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int ile;
        cin>>ile;
        Punkt *wsk[ile];
        for (int i=0; i<ile; i++)
        {
            wsk[i] = new Punkt();
            wsk[i]->policz();
        }
        if (ile==1)
            wsk[0]->pokaz();
        else
        {
            bool srt;
            do
            {
                srt = false;
                int i=ile-1; //2-1
                do
                {
                    i--; //0
                    if ( wsk[i+1]->odl < wsk[i]->odl)
                    {
                        Punkt *tmp = wsk[i];
                        wsk[i] = wsk[i+1];
                        wsk[i+1] = tmp;
                    }
                } while(i!=0);
            } while(srt != false);
            for (int i=0; i<ile; i++)
            {
                wsk[i]->pokaz();
            }
        }
        cout<<endl;
    }
    return 0;
}
