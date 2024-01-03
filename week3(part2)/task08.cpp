#include <iostream>
using namespace std;
main(){
int vegetablep;
int fruitp;
int vegetablew;
int fruitw;
float exchange;
float total;
float earning;
cout <<"Vegetable price per kilogram: ";
cin >> vegetablep;
cout << "Fruit price per kilogram: ";
cin >>fruitp;
cout << "Total kilograms of vegetable: ";
cin >>vegetablew;
cout << "Total kilogarms of fruits: ";
cin>> fruitw;
exchange=1.94;
total=(vegetablep*vegetablew)+(fruitp*fruitw);
earning=total*exchange;
cout << "Earning: "<<earning;
}
