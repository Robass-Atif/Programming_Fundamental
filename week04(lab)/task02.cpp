#include <iostream>
using namespace std;
void add (int number1,int number2);
void multiply (int number1,int number2);
void subtraction(int number1,int number2);


main()
{
int num1,num2;
char operation;
cout << "Enter number 1: ";
cin >> num1;
cout << "Enter number2 : ";
cin >> num2;
cout << "Operation: ";
cin >> operation;
if (operation=='+')
  {
    add (num1,num2);
  }
if (operation=='*') 
  {
    multiply (num1,num2);
  }
if (operation=='-')
   {
    subtraction(num1,num2);
   }
if (operation=='/')
{
   cout << "your operation is not implement ";
}
}

void add (int number1,int number2){
int sum=number1+number2;
cout << "sum: " <<sum <<endl;
}



void multiply (int number1,int number2)
{
 int product =number1*number2;
cout <<"product: "<< product << endl;

}




void subtraction(int number1,int number2)
{
int subt=number1-number2;
cout << "subtraction : " <<subt << endl;










}