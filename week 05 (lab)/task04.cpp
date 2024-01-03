#include <iostream>
 #include <cmath>
using namespace std;

float quardatic( int a,int b,int c);
float quardatic2( int a,int b,int c);

main()
{
system ("cls");

  int a,b,c;
 
  float result;
  
  float result2;
  
  cout << "value of a: ";

  cin>> a;

  cout << " value of b: ";
 
  cin >> b;
  
  cout << " value of c: " ;

  cin >> c;


result= quardatic(a,b,c);



result2=quardatic2(a,b,c);
 
 cout <<" x  is: "<< result<<","<< result2<<endl;
 

}





float quardatic( int a,int b,int c)
{

float x= -b+sqrt( pow(b,2)-(4*a*c)  );
float y=x/(2*a);
 return y;


}



float quardatic2( int a,int b,int c)
{


float x= -b-sqrt( pow(b,2)-(4*a*c)  );
float y= x/ (2*a);
return y;
}













 