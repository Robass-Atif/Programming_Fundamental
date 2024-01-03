#include <iostream>
using namespace std;
main()
{
bool found=false;
int size;
cout <<"enter size: ";
cin >> size;
int arr[size];
for (int i=0;i<size;i++)
{
    cout << "enter no :";
    cin>> arr[i];

}
int finding=7;
for(int i=0;i<size;i++)

{
    int n=arr[i];
int rem;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
    if(finding==rem)
    {
        found=true;
    }
    }
}
cout<<found;
if(found==true)
{
    cout << "boom";
}
else
{
    cout << "there is no 7 in the array";
}

}