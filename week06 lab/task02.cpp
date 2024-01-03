#include <iostream>
using namespace std;
 
int isGreater(int num1,int num2,int num3);

main()
{

int num1,num2,num3,result;
cout << "num1: ";
cin>> num1;
cout << "num2: ";
cin >> num2;
cout << "num3 :";
 cin >> num3;


result=isGreater(num1,num2,num3);

cout << "greatest : " << result ;
 }



int isGreater(int num1,int num2 ,int num3)
{
if(num1>num2 && num1>num3)
{  return num1;}


 else if( num2> num1 && num2>num3)
{ return num2;}


else if( num3> num1 && num3>num2)
{return num3;}
  
  else 
  {
    cout << "invalid input"<<endl;
  }


return 0;
}