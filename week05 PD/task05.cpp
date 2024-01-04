#include <iostream>
using namespace std;


main()
{system ("cls");
int price;
float finalprice;
char code;
float result;
while(1)
{
cout << "Price : ";
cin >> price;
cout << "code : ";
cin >> code;


if (code=='M')
{result=price*6/100;
finalprice=price+result;

}


if (code=='E')
{result=price*8/100;
finalprice= price+result;
}


if (code=='S')
{result=price*10/100;
finalprice=price+result;
}


if (code=='V')
{result= price*12/100;
finalprice=price+result;
}

if(code=='T')
{result=price*15/100;
finalprice=price +result;
}



cout <<finalprice;
}
}