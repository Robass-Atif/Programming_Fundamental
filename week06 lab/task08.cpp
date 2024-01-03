#include<iostream>
using namespace std;
float lowestprice(int,string);

main()
{
    float kilo,result;
    string period;
    cout << "kilometres: ";
    cin>> kilo;
    cout<< "period";
    cin>> period;
    result=lowestprice(kilo,period);
cout << "lowest price: "<< result<<endl;
}





float lowestprice(int kilo,string period)
{float amount;
   if(kilo>100 && (period =="day" || period=="night"))
   {
        amount=0.06*kilo;
   } 
  else if(kilo>=20 && kilo <=100)
  {
    amount =0.09*kilo;
  }
  else 
  {
        if(period=="day")
          {  amount=(kilo*0.79)+0.70;
          }
          else
          {
            amount=(kilo*0.90)+0.70;

          }

  }
  return amount;
}