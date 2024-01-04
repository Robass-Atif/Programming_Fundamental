#include <iostream>
using namespace std;

float calculatemoney(int,int);

main()
{
int age,machine;
float toy;
float result;
cout<<"enter age : ";
cin>>age;
cout<<"enter price of toy: ";
cin>>toy;
cout<<"enter price of machine: ";
cin>>machine;
result=calculatemoney(age,toy);
if(result<machine)
{
    cout<<"no!"<<endl;
    result=machine-result;
    cout<<result<<endl;
}
else
{
    cout <<"yes!"<<endl;
    result=result-machine;
    cout<<result<<endl;
}

}

float calculatemoney(int age,int toy)
{int x=0;
int y=0;
int gift=0;
int total;
int sum=0;

   for(int i=1;i<=age;i++)
   {
    if(i%2!=0)
    {
        x=x+1;
    }
    

    if(i%2==0)
    {
            y=y+1;
         gift=(x*10)+gift; 
           
    }
    

    


   }

   toy=toy*x;
   gift=gift-y;
    total=gift+toy;
   return total;  

}

