#include<iostream>
using namespace std;
main()
{
int size;
cout<< "enter size: ";
cin>> size;
int arr[size];
for(int i=0;i<size;i++)
{
    cout <<"enter no: ";
    cin>>arr[i];
    }
    int transformation;
    cout <<"transformation: ";
    cin>>transformation;
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            arr[i]=(transformation*2)+arr[i];
        }
        else
        {
            arr[i]=(transformation*(-2))+arr[i];
        }
    }

    for(int i=0;i<size;i++)
    {
        cout << arr[i]<< ",";
    }
}