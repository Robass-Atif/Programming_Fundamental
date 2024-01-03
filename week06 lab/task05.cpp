#include <iostream>
using namespace std;

string checktitle(char gender, int age);
main()
{
    int age;
    char gender;
    string result;
    cout << "age : ";
    cin>>age;
    cout << "gender : ";
    cin>> gender;
    result=checktitle(gender,age);
    cout << result;

}











string checktitle(char gender, int age)
{ int ageis=age;
   if(gender=='m' && ageis>=16 )
{
    return "mr.";
}
else if(gender=='m' && ageis<16 )
{
    return "master";
}

if(gender=='f' && ageis>=16)
{
    return" mrs.";
}
else
{
    return "miss";
}
return 0;
}