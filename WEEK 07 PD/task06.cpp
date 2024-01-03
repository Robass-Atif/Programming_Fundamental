#include <iostream>
using namespace std;

main()
{
    int days;
    
    cout<<" days :";
    cin>>days;
    
    int input=0;
    int treated=0;
     int totalpatient=0;
     int doctor=7;
    int x=0;
    int untreated=0;
    int y=0;
    for(int i=1;i<=days;i++)
    {
        cout<< " patient: ";
        cin>>input;

        if(input<doctor)
        {
            treated=input;
            untreated=0;
        }
        else if(input==doctor)
        {
            treated=doctor;
            untreated=0;
        }
        else if(input>doctor)
        {
            treated=doctor;
            untreated=input-doctor;
            cout<<untreated<<endl;
            

        }

        
        if(days%2==0)
        {
            if (untreated>0)
            {
                doctor=doctor+1;
            }
        }

    x=x+treated;
    y=y+untreated;
    
        
        
    }
    cout << "treated: "<<x<<endl;
    cout << "untreated: "<<y<< endl;
    
}