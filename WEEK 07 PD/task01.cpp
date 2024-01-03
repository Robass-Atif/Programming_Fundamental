#include<iostream>
using namespace std;
void nestexample(int rows);

main()
{
    int rows;
    cout << "Rows: ";
    cin>>rows;
    nestexample(rows);

}







void nestexample(int rows)
{
    for (int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout <<'#';
        }
        cout<<endl;
    }
}