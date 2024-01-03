#include <iostream>
using namespace std;
main()
{
    string word1,word2;

    cout << "enter word1: ";
    cin >> word1;
    cout<<"enter word2: ";
    cin>>word2;
    int count1=0;
    int count2=0;
    int count3=0;
    // for(int i=0;word1[i]!='\0';i++)
    // {
    //     count1++;
    // }
    
    //  for(int i=0;word2[i]!='\0';i++)
    // {
    //     count2++;
    // }
    count1=word1.length();
    count2=word2.length();
    
  for(int i=0;i<count1;i++)
  {
        for(int j=0;j<count2;j++)
        {
            if(word1[i]==word2[j])
            {
                count3++;
                break;
            }
        }


  }
  cout<<count3;
}