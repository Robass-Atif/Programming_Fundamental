#include <iostream>
using namespace std;

float calculateprice(float,int);


main()
{
float money,result;
int year;
cout<< "enter inheritance: ";
cin>>money;
cout<<"enter year: ";
cin>> year;
result=calculateprice(money,year);

if(result-money<0)
{
    result=(result-money)*(-1);
    cout <<"yes!"<<"he will live a carefree and will have "<<result<<" money left.";

}
else
{
    cout <<"he will need "<< result<< " amount";
}

}


float calculateprice(float money,int year)
{
int age =year-1801;
float evenamount=0;
float oddamount=0;

    for(int past=1800;past<=year;past++)
    {
        if(past%2==0)
        {
           evenamount=12000*(year-1800); 
        }
        else
        {
           oddamount=12000+50*(age+18);
        }
    }


float totalamount=evenamount+oddamount;

return totalamount;

}