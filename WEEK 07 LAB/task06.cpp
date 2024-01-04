#include<iostream>
using namespace std;

int digitsum(int);


main()
{
int num1,result;
cout<< "enter no: ";
cin>>num1;
result=digitsum(num1);
cout<<result;

}


int digitsum(int num1)
{int sum=0;
    int y;
    
    while(num1>0)
    {
        y=num1%10;
        num1=num1/10;
        sum=sum+y;
    }
    return sum;
}