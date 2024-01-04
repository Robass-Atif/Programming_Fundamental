#include <iostream>
#include<cmath>
using namespace std;

float output (float,float,float,string);


main()
{system("cls");
float length,width,height;
string unit;
float result;
while(1)
{
cout << "lenth: ";
cin>>length;
cout << "width: ";
cin >>width;
cout << "height : ";
cin >> height;
cout << "unit  you  want : ";
 cin >> unit ;
output (length,width,height,unit);
result=output(length,width,height,unit);
cout << result<< endl;
}
}






float output (float length,float width ,float height ,string unit)
{
if (unit=="centimeters")
{float y=(length*width*height)/(3*0.000001);
return y;
}

if (unit=="kilometers")
{

double b=pow(10,9);
float y=(length*width*height)/(3*b);
return y;
}

if(unit=="millimeters")
{float y=(length*width*height)/(3*0.000000001);

return y;}



return 0;


}







