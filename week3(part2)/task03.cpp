#include <iostream>
using namespace std;
main() {
int intialVelocity;
int acceleration;
int time;
float finalVelocity;
cout << " Enter Intial Velocity : ";
cin >> intialVelocity;
cout <<  "Enter Acceleration : ";
cin >> acceleration;
cout << "Enter Time : ";
cin >> time;
finalVelocity=(acceleration*time)+intialVelocity;
cout << "Final Velocity : " << finalVelocity;
}