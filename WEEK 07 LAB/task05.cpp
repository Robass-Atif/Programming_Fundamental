#include <iostream>
using namespace std;

int frequency(int,int);


main()
{
    int num1,num2,result;
    cout << "enter no.1 : ";
    cin>> num1;
    cout <<"enter no.2 : ";
    cin>>num2;
    result = frequency(num1,num2);
    cout <<result;
}



int frequency(int num1,int num2)
{
int y;
int i=0;
while(num1>0)
{
    
 y=num1%10;
num1=num1/10;
if (y==num2)
{
    i=i+1;
}


}

return i;
}