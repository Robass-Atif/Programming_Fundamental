#include <iostream>
using namespace std;
void totalamount(string day,int amount);


main()
{
	while(true)
	{
	string day;
	int amount;
	cout<< "Enter Day: ";
	cin>> day;
	cout<< "Enter Amount: ";
	cin>>amount;
	totalamount(day,amount);



	}
}



void totalamount(string day,int amount)
{
	if(day=="sunday")
	{
	int tamount=amount*95/100;
	cout << "your Amount is: "<<tamount<<endl;
	}
	if (day!="sunday")
	{
	int tamount=amount;
	cout<<"your Amount is : "<<tamount<<endl;
	}
}