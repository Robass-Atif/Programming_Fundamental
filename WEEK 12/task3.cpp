#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string tname;
    fstream file;
    int count=0;
    bool check=false;
    
    file.open("names2.txt",ios::in);
    
    getline(file,tname);
    file.close();
    int i=0;
    while(tname[i]!='\0')
    {
        if (tname[i]==' ' && (tname[i+1]!='T' || tname[i+1]!='t'))
        {
            count++;


        }
        i++;
    }
    cout<<count;
}
