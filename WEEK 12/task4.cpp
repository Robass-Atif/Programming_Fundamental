#include <iostream>
#include<fstream>
using namespace std;
main()
{
    char name;
    char letter;
    cout<< "enter letter:";
    cin >>letter;
    fstream file1;
    file1.open("name2.txt",ios::in);
    int count=0;
    while(!file1.eof())
    {
    // file1>>name;
    if(name==letter)
    {
        count++;
    }
    
    
    }
    // cout<<count;
    file1.close();
    cout <<count;
}