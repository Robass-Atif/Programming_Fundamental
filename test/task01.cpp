#include<iostream >
using namespace std;
int check(int arr[3][3]);
main ()
{
    int arr[3][3]={{0,2,0},
                   {4,5,2},
                   {0,2,0}};
    int col;
    int result=check(arr);
    cout<<result;

}

int  check(int arr[3][3])
{
    int total=0;
    for(int i=0;i<3;i++)

    {
        int count=0;
        for(int j=0;j<3;j++)
        {
            // for(int k=0;k<3;k++)
            // {
            if(arr[i][j]==arr[j][i])
            {
             count++;
            if(count==3)
            {
            total++;
            }
            }
            // }

        }
    }
    return total;
}