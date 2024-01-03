#include <iostream>
using namespace std;
main(){
int a,b,c,d,e,f,g,h;
cout << "Enter Number : ";
cin>>a;
b=a%10;
c=a/10;
d=c%10;
e=c/10;
f=e%10;
g=e/10;
h=(b+d)+(f+g);
cout << "Sum: " << h;
}


