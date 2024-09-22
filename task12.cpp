#include<iostream>
using namespace std;
main()
{
int sqm,width,height,nwalls;
cout<<"Number of square meters you can paint: ";
cin>>sqm;
cout<<"Width of single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall: ";
cin>>height;
nwalls=sqm/(height*width);
cout<<"Number of walls you can paint: "<<nwalls;
}