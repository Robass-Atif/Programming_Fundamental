#include <iostream>
using namespace std;
main()
{
    int num;
    cout<<"num: ";
    cin>>num;
    int sum=0;
    for(int i=num;i<=num && i>=1;i--)
    {
        sum=sum+i;
    }
    cout<<sum;
}