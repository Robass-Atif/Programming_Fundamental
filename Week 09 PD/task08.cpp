#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size : ";
    cin>> size;
    string color[size];
    for( int i=0;i<size;i++)
    {
        cout << "enter color: ";
        cin>> color[i];
    }
     int total=(size*2)+(size-1);
     cout << total;
}



