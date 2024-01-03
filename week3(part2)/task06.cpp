#include <iostream>
using namespace std;
main (){
float bagsize;
int cost;
int area;
float costpound;
float costarea;
cout << "Enter bag size in pounds: ";
cin >> bagsize;
cout << "Enter cost of the bag: ";
cin >>cost;
cout << "Enter area covered by each bag in square feet: ";
cin >> area;
cout << "______________________________________"<<endl;
costpound=cost/bagsize;
cout << "Cost of the fertilizer per pound: "<<costpound<< endl;
costarea=bagsize*area;
cout << "Cost of fertilizing the area per square feet: "<< costarea;
}