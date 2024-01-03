#include <iostream>
 using namespace std;

 main()
 {
    int size;
    cout << "enter num: ";
    cin>> size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout << "enter no ";
        cin>>arr[i];
    }

    for(int i=size-1;i>=0;i--)
    {
        cout << arr[i]<<" ";
    }

 }