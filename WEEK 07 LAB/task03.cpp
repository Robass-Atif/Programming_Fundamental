#include <iostream>
using namespace std;
main()
{
int n1,n2,next,x;
n1=0;
n2=1;
next;
cout << "enter no :";
cin>>x;
cout<<n1<<"," <<n2;



for (int i=0;i<=x-2;i++)
{
    
    
    next=n1+n2;
        cout <<","<< next;
    n1=n2;
    n2=next;
        
    
}

}