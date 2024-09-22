#include<iostream>
using namespace std;
main()
{
float initialv;
float finalv;
float acc;
float time;
cout<<"Enter initial velocity (m/s): ";
cin>>initialv;
cout<<"Enter acceleration (m/s^2): ";
cin>>acc;
cout<<"Enter time (s): ";
cin>>time;
finalv=initialv+(acc)*(time);
cout<<"Final velocity: "<<finalv;
}