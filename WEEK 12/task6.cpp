#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream file;
    
    string word;
    
    file.open("names2.txt",ios::in);
    while(!file.eof())
    {
    file>>word;

    
    if (word.length()== 4)
    {
        
        cout<<word<<endl;

    }
    
    }
    file.close();
    
}