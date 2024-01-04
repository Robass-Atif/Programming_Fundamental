#include<iostream>
using namespace std;
void sum (int num[],int size,int rotate);
main()
{
    int size=9;
int num[size]={1,2,3,4,5,6,7,8,9};
int rotate;
cout<< "rotate :";
cin>>rotate;


sum(num,size,rotate);
for(int i=0;i<9;i++)
{
    cout<<num[i]<<" ";
}    
}
void sum(int num[],int size,int rotate )
{
    for(int i=0;i<rotate;i++)
    {

    int temp=num[0];
    for(int i=0;i<size-1;i++)
    {
        num[i]=num[i+1];

    }
    num[size-1]=temp;
    
    }
}