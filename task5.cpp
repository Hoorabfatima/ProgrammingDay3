#include<iostream>
using namespace std;
main()
{
string name;
float weight;
float days;
cout<<"Enter the name of person: ";
cin>>name;
cout<<"Enter the target weight loss on kilograms: ";
cin>>weight;
days=15*weight;
cout<<name<<" will need "<<days<<" days to lose "<<weight<<" kg weight by following doctor's suggestion.";
}