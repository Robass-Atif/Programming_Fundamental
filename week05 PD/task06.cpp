#include <iostream>
#include <cmath>
using namespace std;

main()
{
float need,firm,worker;

cout << "hours needed: ";
cin >>need;
cout << "days firm has: ";
cin >> firm;
cout << "worker: ";
cin >> worker;




float input=(firm*10/100);
float result= firm-input;
float result2=result*worker*10;
int result3=floor(result2);

if(result3<need)
{int result4=need-result3;
cout << "not  enough time !"<<result4 << " hour needed"<< endl;
}

if (result3>need)
{int result5=result3-need;
cout << "yes!" << result5<< " hours left";
}
}