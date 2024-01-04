#include <iostream>
using namespace std;
void totalamount(string day,int amount);



main ()
{
while (true)
{
string day;
int amount;
cout << "enter day : ";
cin >> day;
cout << "enter amount : ";
cin>>amount;

totalamount(day,amount);

}
}


void totalamount(string day,int amount)
{

if (day=="sunday")
	{
	  amount=amount*90/100;
	 cout<< "Your amount: "<< amount<< endl;
	}
if (day!="sunday")
	{
	  amount =amount;
	cout << "your amount: " << amount<<endl;
	}
}   


