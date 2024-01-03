#include <iostream>
using namespace std;
float amount(string,string,int);

main()
{
string city,product;
float quantity,result;
cout << "city : ";
cin>> city;
cout << "product: ";
cin >>product;
cout << "quantity: ";
cin >> quantity;
result=amount(city,product,quantity);
cout << "result: "<< result;



}











float amount(string city,string product,int quantity)
{
if(product=="coffee")
    {
        if (city=="sofia")
        {
            return quantity*0.5;
        }
        else if(city=="plovdiv")
        {
            return quantity*0.4;
        }
        else
        {
            return quantity*0.45;
        }
    }

    else if (product=="water")
    {
        if(city=="sofia")
        {
            return quantity*0.80;
        }
        else if(city=="plovdiv")
        {
            return quantity*0.70;
        }
        else
        {
                return quantity*0.7;
        }
    }
    else if(product=="beer")
    {
        if(city=="sofia")
        {
            return quantity*1.2;
        }
        else if (city=="plovdiv")
        {
            return quantity*1.15;
        }
        else
        {
            return quantity*1.10;
        }
    }

    else if (product=="sweets")
    {
        if (city=="sofia")
        {
            return quantity*1.45;
        }
        else if (city =="plovdiv")
        {
            return quantity*1.30;
        }
        else
        {
            return quantity*1.35;
        }
    } 

    else
    {
        if (city=="sofia")
        {
            return quantity*1.60;
        }
        else if (city=="plovdiv")
        {
            return quantity*1.50;
        }
        else 
        {
            return quantity*1.55;
        }
    
    
    }
return 0;

}