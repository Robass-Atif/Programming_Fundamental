#include<iostream>
using namespace std;
void sum (int num[],int size);
main()
{
    int num[]={1,2,3,4,5};
    int size=5;
    sum(num,size);
    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<" ";
    } 

    
}
void sum(int num[],int size)
{
    for(int i=0;i<size;i++)
    {
        num[i]++;
    }
}