#include <iostream>
using namespace std;

main()
{
int num;
cout<< "no: ";
cin>> num;
int input;
int p1=0;
int p2=0;
int p3=0;
int p4=0;
float a,b,c;


for(int i=1;i<=num;i++)
{
cout<< "enter no; ";
cin>>input;
if(input%2==0)
{
p1=p1+1;
}
if(input%3==0)
{
    p2=p2+1;
}
if(input%4==0)
{
    p3=p3+1;
}


}
a=(p1*100)/num;
b=(p2*100)/num;
c=(p3*100)/num;

cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
}