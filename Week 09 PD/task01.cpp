#include<iostream>
using namespace std;
main()
{

    string fruit[5]={"apple","mango","bannana","peach","guava"};
    int prices[5]={60,50,30,20,80};
    string name;
    float amount;
    float total;
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter amount: ";
    cin>>amount;
    for(int i=0;i<5;i++)
    {
        if( name==fruit[i])
        {
            total=amount*prices[i];
            break;
        }
        else
        {
            continue;
        }

    }
    cout <<total;
}