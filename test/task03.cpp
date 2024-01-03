#include<iostream>
using namespace std;
void check(int arr[]);
main()
{
    // string  arr[3]={"ac","scdf","cfg"};
    // cout<<arr;
    // int x=0;
    // int *y=&x;
    // cout<<y;
// int arr[]={1,2,3,4};
// int *arr1=arr;
// int *arr3=&arr[3];
// cout<<arr3-arr1;

int arr[5]={0};
for(int i=0;i<5;i++)
{
    cout<<arr[i];
}

// int arr[] = {12, 14, 15, 23, 45};
// check(arr);
// for(int i=0;i<5;i++)
// {
//     cout<< arr[i]<<endl;
// }


// int x=10;
// int z=4;
// int *y=&x;
// cout<< y<<endl;
// y=y+1;
// cout<<y<<endl;
// cout<<*y;

// for(int i=0;i<6;i++)
// {
//     (y)++;
//     cout<<y<<endl;
// }


}
void check(int arr[])
{
    for(int i=0;i<5;i++)
    {
        arr[i]++;
    }
}