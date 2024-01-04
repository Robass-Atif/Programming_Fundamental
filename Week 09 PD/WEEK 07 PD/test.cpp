#include<iostream>
using namespace std;
bool isprime(int num);

main()
{
    int num;
    bool result;
    cout << "enter no : ";
     cin >> num;
     result=isprime(num);
     
     if(result==1)
     {
        cout <<"true";
     }
     else
     {
        cout <<"false";
     }


}

bool isprime(int num)
{int count =0;
int reminder=0;
    for(int i=1;i<=num;i++)
    {

        reminder=num%i;
        if(reminder==0)
        {
        count=count+1;
        }


    }
    if(count ==2)
    {
        return true;
    }
    else 
    {
        return false;
    }



    
    return 0;
}