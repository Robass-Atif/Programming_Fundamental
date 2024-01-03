#include<iostream>
using namespace std;

main()
{int rows=0;
cout<< "rows: ";
cin >>rows;
     for (int i=rows;i<=rows && i>=1;i=i-1)
    {
        for(int j=i;j<=i && j>=1 ;j=j-1)
        {
            cout <<'#';
        }
        cout<<endl;
    }

}