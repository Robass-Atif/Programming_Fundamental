# include <iostream>
using namespace std;

main()
{system ("cls");
int volume,pipe1,pipe2,input;
float hour;
while(1)
{
cout<< "Volume: ";
cin>>volume;
cout<< "Flow of pipe 1 : " ;
cin >>pipe1;
cout << "Flow of pipe 2 : ";
cin>> pipe2;
cout << "Hour : ";
cin >> hour;
input=(pipe1*hour)+(pipe2*hour);



if (input<volume)
{
int y=(input*100)/volume;
int w=(pipe1*100*hour)/input;
int b=(pipe2*100*hour)/input;
cout<< "the pool is " << y << "%" << ".pipe 1 is " << w <<"%.pipe 2 is "<< b <<"%."<<endl;

}

if (input >volume)
{int y=input -volume;
cout << "for " <<hour<<" hours the pool overflows with "<<y<<" liters." << endl;
}




}
}