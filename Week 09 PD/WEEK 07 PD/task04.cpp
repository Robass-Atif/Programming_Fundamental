#include <iostream>
using namespace std;
void type(int);

main()
{
    int num;
    cout << "num: ";
    cin>> num;
     type( num);
}

void type(int num)
{
    for(int i=1;i<=num;i++)
    {
    
    
    
    
        if(i%4==0)
        {
            
            cout<<i*10<<",";
            
        }
         else
         {
        cout <<i<<",";
         }
     
    
    }
}