#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int large (int x,int y)
{
    int counter=0;
    while (x!=y)
    {
        cout << "your numbeer is high try low one \n";
        cin >>x;
        counter++;
    }
    cout << "congratulation it is correct one after "<< counter <<" trying \n";
}
int small (int x,int y)
{
    int counter=0;
    while (x!=y)
    {
        cout << "your numbeer is low try high one \n";
        cin >>x;
        counter++;
    }
    cout << "congratulation it is correct one after "<<counter <<" trying \n";
}
int main()
{
    int x,y,z;

    while (1)
    {
        cout << "if you want play 1 exit 0 \n";
        cin >>z;
        if (z==1)
        {       srand (time(0));
    y=rand()%10;
            cout << "please enter your guess number \n";
            cin >>x;
            if (x>y)
            {
                large(x,y);
            }
            if (x==y)
            {
                cout<< "congratolation it is correct \n";
            }
            if (x<y)
            {
                small(x,y);
            }
        }
        else
        {
          //  srand (time(0));
           // y=rand()%10;
            break;
        }

    }



    return 0;
}
