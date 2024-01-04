#include<iostream>
using namespace std;




main()
{
int num1,num2,result;
cout<< "Enter no: ";
cin>>num1;
cout<<"Enter no: ";
cin>>num2;
int hcf;
for(int i=1;i<=num1 && i<=num2;i++)
{
    if((num1%i==0) && (num2%i==0))
    {
        hcf=i;
    }
}
float lcm=(num1*num2)/hcf;
cout<<hcf<<endl;
cout<< lcm;


}