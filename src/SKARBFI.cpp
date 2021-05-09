/**
 * SkarbFinder
 */
#include <iostream>
using namespace std;

int main()
{
    int ilosc;
    cin>>ilosc;
    while(ilosc--)
    {
        int ile;
        cin>>ile;
        int w1[ile];
        int w2[ile];
        int polnoc = 0;
        int zachod = 0;
        for (int i=0; i<ile; i++)
        {
            cin>>w1[i]>>w2[i];
            switch (w1[i])
            {
                case 0:
                    polnoc += w2[i];
                    break;
                case 1:
                    polnoc -= w2[i];
                    break;
                case 2:
                    zachod += w2[i];
                    break;
                case 3:
                    zachod -= w2[i];
                    break;
            }
        }
        if (polnoc > 0)
        {
            cout<<"0 "<<polnoc<<endl;
            if (zachod > 0)
                cout<<"2 "<<zachod<<endl;
            if (zachod < 0)
                cout<<"3 "<<-zachod<<endl;
        }
        else if (polnoc < 0)
        {
            cout<<"1 "<<-polnoc<<endl;
            if (zachod > 0)
                cout<<"2 "<<zachod<<endl;
            if (zachod < 0)
                cout<<"3 "<<-zachod<<endl;
        }
        else if (zachod > 0)
            cout<<"2 "<<zachod<<endl;
        else if (zachod < 0)
            cout<<"3 "<<-zachod<<endl;
        else
            cout<<"studnia"<<endl;
    }
    return 0;
}
