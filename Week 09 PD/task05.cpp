#include<iostream>
using namespace std;
main()
{
    string arr[4];
    for(int i=0;i<4;i++)
    {
        cout << "enter no :";
        cin >>arr[i];
    }
    string same=arr[0];
    string identical="true";
    for(int i=1;i<4;i++)
    {
        if(same!=arr[i])
        {
            identical="false";
        }
    }
    cout << identical;
}