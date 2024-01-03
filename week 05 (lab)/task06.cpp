#include <iostream>


using namespace std;

string output (int num1,int num2,int num3,int num4,int num5);



main(){system(" cls");

int input,num1,num2,num3,num4,num5,x;
string z;

cout << "Enter no: ";
cin >> input;

num1=input%10;
x=input/10;
num2=x%10;
x=x/10;
num3=x%10;
x=x/10;
num4=x%10;
num5=x/10;

z=output(num1,num2,num3,num4,num5);
cout <<"number is  "<< z<<endl;
}











string  output(int num1,int num2,int num3,int num4,int num5)
{
int add=num1+num2+num3+num4+num5;
	if(add%2==0)
	{
	return "evenish";}

	if(add%2!=0)
	{string z="oddish"; 
	return z;}

return 0;
}



