#include<iostream>
using namespace std;
string hit(string input);
char maze[5][5]={
 {'.','.','.','*','*'},
{'.','*','.','.','.'},
{'.','*','.','.','.'},
{'.','*','.','.','.'},
{'.','.','*','*','.'}
};

main()
{

string input;
cout<< "enter input: ";
cin >>input;
string result=hit(input);
cout<<result;
}

string hit(string input)
{
    char row=input[0];
    char col=input[1];
    int numbery=int(col)-'0'-1;
    int numberx;
    if(row=='A')
    {
        numberx=0;
    }
    if(row=='B')
    {
        numberx=1;
    }
    if(row=='C')
    {
        numberx=2;
    }
    if(row=='D')
    {
        numberx=3;
    }
    if(row=='E')
    {
        numberx=4;
    }

    if(maze[numberx][numbery]=='.')
    {
        return "splash";
    }
   else if(maze[numberx][numbery]=='*')
    {
        return "boom";
    }
    return 0;

}