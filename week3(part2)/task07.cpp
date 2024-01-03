#include <iostream>
using namespace std;
main(){
string name;
int adultp;
int childp;
int adults;
int childs;
float percent;
int totalamount;
float input;

cout << "Enter Movie Name: ";
cin >> name;
cout << "Enter Adult Ticket Price: ";
cin >> adultp;
cout << "Enter Child Ticket Price: ";
cin >> childp;
cout << "Enter Number of Adult Ticket Sold: ";
cin >> adults;
cout << "Enter Number of Child Ticket Sold: ";
cin >> childs;
cout << "Enter Percentage to Donate: ";
cin >> percent;
totalamount=(adultp*adults)+(childp*childs);
input=totalamount-(percent*totalamount)/100;
cout << "__________________________________________"<<endl;
cout << "Total Amount Generated: "<<totalamount<<endl;
cout << "Amount after donation: "<<input<<endl;
}