#include <iostream>
using namespace std;
int nextprime(int num);
int check(int num);
main()
{
    int num;
    int result;
    cout << "enter no: ";
    cin>> num;
    result=nextprime(num);
    cout <<result;
}


int nextprime(int num)
{
    int result=check(num);

    while(result=0)
    {
        num++;
        result=check(num);
    }
    
    
        
    
    


return result;

    
}



int check(int num)
{

 int count =0;
int reminder=0;
    for(int i=1;i<=num;i++)
    {

        reminder=num%i;
        if(reminder==0)
        {
        count=count+1;
        }

    


    }
            if(count==2)
        {
            return num;

        }
return 0;

}

