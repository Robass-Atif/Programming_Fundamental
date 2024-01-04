#include <iostream>
using namespace std;
void eligible(int age);



main ()
{
while (true)
{
int age;

cout << "Age: ";
cin>> age;

eligible (age);
 }
}




void eligible(int age)
{
if (18>age)
{  cout << "you are not eligible." << endl;}
if (18==age)
{ cout<< "you are eligible. " << endl;}
if  (18<age)
{ cout << "eligible " <<endl;}

}