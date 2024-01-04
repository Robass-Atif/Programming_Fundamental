#include<iostream>
using namespace std;
void upper(int);
void lower(int);

main()
{
    int num;
    cout << "rows: ";
    cin>> num;
    
for(int i=num; i>=1;i--)
{

    for(int j=i;j>=1;j=j-1)
    {
        cout<<" ";
    }
    for(int z=i;z<=num;z++)
    {
    
        cout<<"*";
    }
    cout<<endl;

}


for(int i=num;i>=1;i--)
{
    for(int z=i;z<=num;z++)
    {
        cout <<" ";
    }
    for(int j=i;j>=1;j=j-1)
    {
        cout<<"*";
    }
cout<<endl;

}

}