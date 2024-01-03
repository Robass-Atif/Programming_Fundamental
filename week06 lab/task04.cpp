#include<iostream>
using namespace std;
float discount (int amount,string day, string month);

main ()
    {
float amount,result;
string day,month;
cout << "day";
cin >> day;
cout << "month";
cin>> month;
cout << "amount";
cin>> amount;
result=discount(amount,day,month);
cout<<"total amount :"<< result<<endl; 
    }









float discount (int amount,string day, string month)
{
float payable=amount;
if(day=="sunday" && (month== "october" || month=="march"  || month=="august"))
{
   
    payable=amount*0.9;
}
else if(day=="monday" && (month== "november" || month=="december"   ))
{
    payable= payable*0.95;
}
else
{
    payable=payable; 
}
    return payable;


}