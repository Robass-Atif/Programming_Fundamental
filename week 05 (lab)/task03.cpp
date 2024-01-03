#include <iostream>
#include <cmath >
using namespace std;

float height( float distance,float degree);  

main()
{
   system ("cls");

float distance;

float result;

float degree;


cout << "distance  ";

cin>> distance;

cout << " degree  ";
 
cin >> degree;
   
result= height (distance, degree);

cout << "height  " << result <<endl;


}




float height( float distance,float degree)
{
float radian= 57.2958;

float radians=degree/radian;
float angle=tan(radians);
float h=angle*distance;

return h;
}