#include <iostream>
using namespace std;

void printname(string name);

main(){
string name="ali";
printname (name);
printname("bilal");
string secondname;
cout <<"Enter name: ";
cin >> secondname;
printname (secondname); 
}



void printname(string name)
{
cout << "My name is: " << name <<endl;


}