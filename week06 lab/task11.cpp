#include <iostream>
using namespace std;

main()
{
    int budget,people;
    float result;
    string cat;
    cout << "Budget : ";
    cin >> budget;
    cout<< "people: ";
    cin >> people;
    cout << "categary: ";
    cin>> cat;
    float amount;
    float total;
    if(people>=1 && people<=4) 
    {
        amount=budget*0.25;
        if(cat=="vip")
        {
            total=people*499.99;
        }
        else
        {
            total=people*249.99;
        }
    }
    else if (people>=5 && people<=9)
    {
        amount= budget*0.40;
        if(cat=="vip")
        {
            total=people*499.99;
        }
        else
        {
            total=people*249.99;
        }
    }
    else if (people>=10 && people<=24)
    {
        amount =budget*0.50;
        if(cat=="vip")
        {
            total=people*499.99;
        }
        else
        {
            total=people*249.99;
        }
    }
    else if (people>=25 && people<=49)
    {
        amount =budget*0.60;
        if(cat=="vip")
        {
            total=people*499.99;
        }
        else
        {
            total=people*249.99;
        }
    }
    else 
    {
        amount=budget*0.75;
        if(cat=="vip")
        {
            total=people*499.99;
        }
        else
        {
            total=people*249.99;
        }
    }

    if(amount<total)
    {
       result=total-amount;

        cout << "no enough money! you need "<<result<<" leva."<<endl;

    }
    else
    {
        result=amount-total;
        cout<<"yes! you have "<<result<<"leva left." << endl; 
    }
}  
