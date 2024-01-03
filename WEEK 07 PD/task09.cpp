# include<iostream>
using namespace std;

main(){

int num=0;
cout <<"num: ";
cin>>num;

int a=num*2;
for(int x=1;x<=num;x++)
{
    for(int y=1;y<=x;y++)
    {
        cout<<"#";
    }
    for(int j=num;j>=x;j--)
    {
        cout<<"  ";
    }
    // for(int z=num;z>=x ;z--)
    // {
    //     cout<<"88";

    // }
    for(int i=1;i<=x;i++)
    {
        cout<<"#";
    }

    cout<< endl;

    
}


for(int b=1;b<=a+2;b++)
{
    cout<<"#";
}
cout<<endl;





}

