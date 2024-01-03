#include<iostream>
using namespace std;
 char grade (int narks);
 main()
 {
    int marks;
    char result;
    cout<< "marks: ";
    cin >> marks;
result=grade (marks);
cout << "your grade "<< result;
 }


 char grade(int marks)
 {   
    if(marks<50)
    {
        return 'F';
        }
        else if(marks>50 && marks<60)
        {
            return 'E';
        }
else    if (marks> 60 && marks< 70)
    {
        return 'D';
    }
 else   if (marks >70 && marks <80)
    {
        return 'C';
    }
 else   if (marks >81 && marks <85)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }
    return 0;
 }