#include<iostream>
using namespace std;
main()
{   int size;
    cout << "enter a number: ";
    cin>>size;
    int arr[size];


    for(int idx=0;idx<size;idx++)
    {
        cout<< "enter element: ";
        cin>>arr[idx];
        
    }
    
    for(int idx=0;idx<size-1;idx++)
    {
        cout<< arr[idx]<<",";
    }
    cout<<arr[size-1];
    
}