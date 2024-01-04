#include <iostream>
using namespace std;

void printpercentage(int);

main()
{
    int num;
    int num1;
    float a,b,c,d,e;
    float p1=0;
    float p2=0;
    float p3=0;
    float p4=0;
    float p5=0;
    cout <<"Enter no: ";
    cin>>num;
    for(int i=0;i<num;i++)
{

    cout<<"enter no: ";
    cin>>num1;
    if(num1<200)
    {
        p1=p1+1;
    }
    else if(num1<400)
    {
        p2=p2+1;
    }
    else if(num1<600)
    {
        p3=p3+1;
    }
    else if(num1<800)
    {
        p4=p4+1;
    }
    else
    {
        p5=p5+1;
    }
}
    
a=(p1*100)/num;
b=(p2*100)/num;
c=(p3*100)/num;
d=(p4*100)/num;
e=(p5*100)/num;

cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;



}


