#include<iostream>
using namespace std;
main()
{
float size,cost,area,costp,costsqf;
cout<<"Enter the size of fertilizer bag in pounds: ";
cin>>size;
cout<<"Enter the cost of the bag: $";
cin>>cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
costp=cost/size;
cout<<"Cost of fertilizer per pound: "<<costp<<endl;
costsqf=cost/area;
cout<<"Cost of fertilizing per square foot: $"<<costsqf;
}
