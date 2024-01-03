#include <iostream>
using namespace std;
main()
{
    string names[]={"gladiator","dhoom","pk","idiot","starwar"};
    int price=500;
    string movie;
    cout<<"enter name: ";
    cin>>movie;
    int ticket;
    cout<< "enter ticket: ";
    cin>> ticket;
    float amount;
     
    for(int idx=0;idx<5;idx++)
    {
        if(movie==names[idx])
        {
            if(idx%2==0)
            {
                amount=(500*ticket)*0.90;
            }
            else
            {
                amount=(500*ticket)*0.95;
            }
        }
    }
    cout <<amount;

}