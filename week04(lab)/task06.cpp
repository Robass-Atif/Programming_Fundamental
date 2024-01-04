#include <iostream>
using namespace std;
void even(int number);



main()
{
while (true)
{
int num;
cout << "enter number: ";
cin >> num;
even(num);

}
}



void even(int number)
{
if (number%2==0)
{ cout <<"even number"<< endl ;}
if (number%2!=0)
{cout << "odd number " << endl;}
}
