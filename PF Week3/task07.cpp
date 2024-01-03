#include <iostream>
using namespace std;
main (){
string name;
float matric;
float inputM;
float inputI;
float intermediate;
float obtainedM;
float obtainedI;
float aggregate;
float ecat;
float obtainedE;
float inputE;
cout << "Name: ";
cin >> name;
obtainedM=1100;
cout <<"Matric Marks: ";
cin >>inputM;
matric=(inputM*100/obtainedM)*0.1;
obtainedI=550;
cout << "intermediate Marks : ";
cin >>inputI;
intermediate= (inputI*100/obtainedI)*0.4;
obtainedE=400;
cout << "Ecat Marks : ";
cin >>inputE;
ecat=(inputE*100/obtainedE)*0.5;
aggregate=matric+intermediate+ecat;
cout << "your aggregate is : " << aggregate;

}

