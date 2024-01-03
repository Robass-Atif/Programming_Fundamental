#include <iostream>
using namespace std;
float totalincome(string,int,int);

main()
{
    float row,column,result;
    string type;
    cout << "rows : ";
    cin >> row;
    cout << "columns: ";
    cin>> column;
    cout << "screening type: ";
    cin>> type;
result=totalincome(type,row,column);
cout << "total amount : "<< result<<endl;

}




float totalincome(string type,int row,int column)
{float totalamount;
    if(type=="premier")
    {totalamount=row*column*12.50;

    }

  else  if(type=="normal")
    {
        totalamount=row*column*7.50;

    }

    else
    {
        totalamount =row*column*5.00;
    }
    return totalamount;
}