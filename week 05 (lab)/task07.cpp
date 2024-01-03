# include <iostream>
using namespace std;

string numa(int num1);
string numb(int num2);



main()
{system("cls");

int input;
int num1,num2;
string z;
string y;
while(1){
cout<< "Enter no: ";
cin>> input;


num2=input%10;
num1=input/10;


if (input<10)
{z=numb(num2);
cout <<z<<endl;}


if (input>10)
{z=numb(num2);
y=numa(num1);
cout<<y<< " " <<z<<endl;


}




}
}











string numb(int num2)
{
if (num2==1){return "one";}
if (num2==2){return "two";}
if (num2==3){return "three";}
if (num2==4){return "four";}
if (num2==5){return "five";}
if (num2==6){ return "six";}
if (num2==7){ return "seven";}
if (num2==8){return "eight";}
if( num2==9){return "nine";}
return 0;
}



string numa(int num1)
{
if(num1==1){return "ten";}
if (num1==2){return "twenty";}
if(num1==3){return "thirty";}
if (num1==4){return "fourty";}
if (num1==5){return "fifty";}
if (num1==6){return "sixty";}
if (num1==7){return "seventy";}
if (num1==8){return "eighty";}
if (num1==9){return "ninty";}
return 0;
}


















