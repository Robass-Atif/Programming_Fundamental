#include <iostream>
using namespace std;
main() {
string name;
int subject01;
int subject02;
int subject03;
int subject04;
int subject05;
float percentage;
cout << "Your Name : ";
cin >> name;
cout << "Enter Subject 01 Marks: ";
cin >> subject01;
cout << "Enter Subject 02 Marks: ";
cin >> subject02;


cout << "Enter Subject 03 Marks: ";
cin >> subject03;
cout << "Enter Subject 04 Marks: ";
cin >> subject04;
cout << "Enter Subject 05 Marks: ";
cin >> subject05;
percentage=(subject01+subject02+subject03+subject04+subject05)*100/500;
cout << "Your Percentage: " << percentage;
}