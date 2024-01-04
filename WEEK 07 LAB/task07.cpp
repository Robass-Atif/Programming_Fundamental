#include <iostream>
using namespace std;

void table(int);

main()
{
    int num;
    cout<< "Enter no: ";
    cin>>num;
    int next;
    for(int i=1;i<=10;i++)
    {
       next =i*num;
       cout<<num<<"x"<<i<<"="<<next<<endl;
    }
}