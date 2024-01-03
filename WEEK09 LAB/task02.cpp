#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "enter number : ";
    cin>> size;

    int arr[size];
    int sum=0;
    for(int idx=0;idx<size;idx++)
    {
        cout << "enter number: ";
        cin >> arr[idx];
        sum=sum+arr[idx];

    }
    int average=sum/size;
    cout << sum<<endl;
    cout << average;


}