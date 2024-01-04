#include<iostream>
using namespace std;
void sum (int num[3],int num1[3],int add[6],int size);
main()
{
    int size=3;
int num[size]={1,2,3};
int num1[size]={4,5,6};
int num2[size+size];

sum(num,num1,num2,size);
for(int i=0;i<6;i++)
{
    cout<<num2[i]<<" ";
}    
}
void sum(int num[],int num1[],int add[],int size )
{
    for(int i=0;i<size;i++)
    {
        add[i]=num[i];

    }

    for(int i=0;i<size;i++)
    {
        add[i+size]=num1[i];
    }
}