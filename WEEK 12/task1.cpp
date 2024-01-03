#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
string menu();
void store(string,string);
void adduser(string,string);
void signin(string,string);
void studentview();
void load();
bool  samevalidation(string);


string students[100];
string passwords[100];
int usercount=0;
main()
{
    load();

string menuoption="0";
while(menuoption!="3")
{
    system("cls");
    menuoption=menu();
    if (menuoption=="1")
    {
        system("cls");
        string name,password;
        cout<<"name:" ;
        cin >>name;
        cout<< "password:";
        cin>>password;
        signin(name,password);
        getch();
        
    }
    if(menuoption=="2")
    {
        system("cls");
        string name,password;
        cout<< "enter name:" ;
        cin>>name;
        cout<< "enter password:";
        cin >>password;
        adduser(name,password);
        getch();

    }
    if(menuoption=="4")
    {
        system("cls");
        studentview();
        getch();

    }


}
}


string menu()
{
cout<< "select 1"<<endl;
cout<<endl;
cout<< "1.login"<<endl;
cout<< "2.signup"<<endl;
cout<< "3.exit"<<endl;
cout<< "4.viewstudents"<<endl;
string option;
cout<< "option: ";
cin>>option;
return option;
}

void store(string name,string password)
{
fstream file;
file.open("names.txt",ios::app);
file<<name<<endl;
file<<password<<endl;
file.close();

}

void adduser(string name,string password)
{
    bool check1=false;


    if(check1==false)
    {
        students[usercount]=name;
        passwords[usercount]=password;
        store(name,password);
        usercount++;
    }
    else
    {
        cout<< "already exit"<<endl;
    }
}

void signin(string name,string password)
{
    for (int i=0;i<usercount;i++)
    {
        if (students[i]==name && passwords[i]==password)
        {
            // sleep(90);

        }
    }

}

void studentview()
{
    cout << "names";
    cout << "\t\t";
    cout <<"passwords";
    cout <<"\t\t";
    cout<<endl;
    for(int i=0;i<usercount;i++)
    {
        cout << students[i]<<"\t\t"<<passwords[i]<<endl;
    }
}

void load()
{
    fstream file;
    file.open("names.txt",ios::in);
    
    while(!file.eof())
    {
        file>>students[usercount];
        file>>passwords[usercount];
        usercount++;
    }
    file.close();

}

bool samevalidation(string name)
{
    bool check=true;
    for(int i=0;i<usercount;i++)
    {
        if(students[i]==name)
        {
            check=false;
            break;
        }
    }
    return check;
}