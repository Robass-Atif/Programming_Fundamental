# include <iostream>
using namespace std;
string alpha(char x);
main()
{system("cls");
char x;
string y;
while(1)
{
cout << "Enter : ";
cin>> x;
y=alpha(x);
cout<<y<<endl;
}
}
string alpha (char x)
{string y;
if(x=='A'){return "greater alphabat";
}
if (x=='a'){return "small alphabat";
}
return 0;
}



