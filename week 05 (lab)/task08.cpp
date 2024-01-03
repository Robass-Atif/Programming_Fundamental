#include <iostream>
using namespace std;
 

int output(int num1,int num2);

main()
{
system("cls");
int num1,num2;
int z;
while (1){
cout <<"Hours: ";
cin>>num1;
cout << "Minutes: ";
cin>> num2;











int x=(num1*60)+num2+15;
int minu=x%60;
int hour=x/60;
if(hour==24){hour=0;}
cout << "result : "<<hour << ":" <<minu<<endl;
}
}