#include<iostream>
#include<fstream>
using namespace std;
string arr[100];
string roll[100];
int per[100];
int i=0;
main()
{
    fstream file;
    
    
    
    file.open("names2.txt",ios::in);
    
    while(!file.eof())
    {
    file>>arr[i];
    file>>roll[i];
    file>>per[i];
    i++;
    

    
    }

    file.close();
    

    for(int j=0;j<i;j++)
    {
        int temp;
        int largest=per[j];
        for(int idx=j;idx<i;idx++)
        {
            if(largest<per[j])
            {
                largest=per[j];
            }
        }
        temp=largest;
        largest=per[j];
        per[j]=temp;
    }
// cout<<i;

    fstream file1;
    file1.open("result.txt",ios::out);
    int idx=0;
    while(idx<i)
    {
        if(per[idx]>60)
        {
        file1<<arr[idx]<<endl;
        file1<<roll[idx]<<endl;
        file1<<per[idx]<<endl;
        
        }
        idx++;
    }
    file1.close();




}