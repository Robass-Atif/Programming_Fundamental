#include <iostream>
#include <fstream>
using namespace std;
main()
{
     char line;
  fstream file;
  file.open("names1.txt",ios::in );
  int count=0;
    while(!file.eof())
    {
        file>>line;
count++;
        
        // cout<< line;
        // cout<< "\n";
    }
cout<< count;
  file.close(); 


}