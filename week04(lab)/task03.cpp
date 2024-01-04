#include <iostream>
using namespace std;
void ifpass (int marks);



 main()
{
int marks;
cout <<"Marks: ";
cin >> marks;
ifpass(marks);

}





void ifpass (int marks)
{
    if(marks>50)
    {  
           cout << "You have passed first qiuz of PF";

    }

    if (marks==50)
   {
           cout << "Your marks is 50";

   }

     if (50>marks)
    {
           cout <<" You have failed the Quiz";
     }
}