#include <iostream>
using namespace std;
string check(float); 

main()
{
    float speed;
     string result;
     cout << "speed: ";
     cin >>speed;
     result=check (speed);
     cout << result; 
}



string check(float speed)
{
    if(speed<=10 )
    {
        return "slow";
    }

    if(speed>10 && speed<50)
    {
        return "normal";
    }
    if(speed>50 && speed<150)
    {
        return "fast";
    }
    if(speed>150 && speed<1000)
    {
        return "ultra fast";
    }
return 0;
}