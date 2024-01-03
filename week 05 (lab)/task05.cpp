#include<iostream >
#include <cmath >

using namespace std;



bool input( int num1);


main()
{

int num1;

bool result ;



cout << "Enter three digit no: ";


cin>>num1 ; 

result=  input(num1);


cout <<result;


}






bool input( int num1)

{

int a=num1%10;

int b=num1/10;

int c=b%10;

int d=b/10;

bool result;

	if( a==d)

	{
	result=true;

	return result;

	}


	if(a!=d)
	{
	result=false;

	return result;
	}


return 0;
} 