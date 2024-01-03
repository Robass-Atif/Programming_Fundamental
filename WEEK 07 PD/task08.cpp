#include<iostream>
using namespace std;

main()
{int ton;
int minibus=0;
int train=0; 
int truck=0;
cout <<"tons: ";
cin>> ton;
int input;
for(int i=1;i<=ton;i++)
{
    cout<<"enter no: ";
    cin>>input;
    if(input<=3)
    {
        minibus=minibus+input;
    }
    if(input>3 && input<=11)
    {
        truck=truck+input;
    }
    if(input>11)
    {
        train=train+input;
    }
}

float total=minibus+truck+train;

float a,b,c;
a=(minibus*100)/total;

b=(truck*100)/total;
c=(train*100)/total;
float average=(minibus*200+truck*175+train*120)/total;
cout<<average<<endl;
cout<<a<<endl;
cout<< b << endl;
cout<<c <<endl;






}