#include <iostream>
#include <cmath>
using namespace std;


main()
{
float holidays,weekend;
string year;
cout<< "holidays: ";
cin>>holidays;
cout<<"year: ";
cin>>year;
cout<< "weekend: ";
cin>>weekend;
 float sofia;
 float nott;
 float time;
 float output;
if (year=="leap" || year=="normal")

{
    
   
    sofia=holidays*(0.6667);
    
    
    time=48*(0.75);
    time=sofia+time;




    
}
 if (year=="leap")
 {
    time=time +(time*0.15);

 }
 time=floor(time);
cout<<time;
}