#include <iostream>
using namespace std;

float add (int num1, float num2); 
float division(int num1,float num2);
float maximum( int num1,float num2);
main()
{
system("cls");

int num1;

float num2;

float total;

float greater;


cout << "No 1: ";

cin >> num1;

cout << "No 2: ";

cin>> num2;

total=add(num1,num2);

cout << "total : " <<total<<endl;

total =division(num1,num2);

cout << "division: " <<total<<endl;




 greater= maximum(num1,num2);
cout << greater<< "   greater no." <<endl;

}






float add (int num1, float num2)
{
float sum=num1+ num2;

return sum ;
}





float division(int num1,float num2)
{float div=num1/num2;

return div;
}











float maximum( int num1,float num2)
{

	if (num1>num2)
	{
	return num1;
	}


	if (num2>num1)
	{
	return num2;
	}
return 0;


}








