#include<iostream>
using namespace std;
main()
{
float veg,fruit,vegkg,fruitkg,totalcoin,rps;
cout<<"Enter vegetable price per kilogram(in coins): ";
cin>>veg;
cout<<"Enter fruit price per kilogram(in coins): ";
cin>>fruit;
cout<<"Enter total kilograms of vegetables: ";
cin>>vegkg;
cout<<"Enter total kilograms of friuts: ";
cin>>fruitkg;
totalcoin=(veg*vegkg)+(fruit*fruitkg);
rps=totalcoin/1.94;
cout<<"Total earnings in Rupees (Rps): "<<rps;
}
