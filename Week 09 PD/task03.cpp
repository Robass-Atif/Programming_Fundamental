#include<iostream>
using namespace std;
string name;
int lenght;
main()
{
    cout << "enter name: ";
    cin >> name;
    
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    
    if(count%2==0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    
}