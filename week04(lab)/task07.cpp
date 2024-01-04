#include <iostream>
using namespace std;
void isgreater(int number1,int number2);


main ()
{ 

while (true)
{
int num1,num2;
cout << "enter num1  ";
cin>>num1;
cout << "enter num2  ";
cin>>num2;
isgreater(num1,num2);
}
}



void isgreater(int number1,int number2)
{
 if (number1>number2)
{
cout << number1 << " is greater "<<endl;}
if (number2>number1)
{cout << "number 2 is greater " <<endl;}
} 