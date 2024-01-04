#include<iostream>
using namespace std;

int totaldigit(int);

main()
{
    int num;
    int result;
    cout << "num: ";
    cin>> num;
    result=totaldigit(num);
    cout<<result;


}


int totaldigit(int num)
{int i=0;

    while(num>0)

    {
        num=num/10;
        i++;
    }
    return i;
}