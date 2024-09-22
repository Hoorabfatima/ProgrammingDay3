#include<iostream>
using namespace std;
main()
{
float adultTP, childTP, adultTS, childTS, charitypercent, total, donation, remaining;
string name;
cout<<"Enter the movie name: ";
cin>>name;
cout<<"Enter the adult ticket price: $";
cin>>adultTP;
cout<<"Enter the child ticket price: $";
cin>>childTP;
cout<<"Enter the number of adult tickets sold: ";
cin>>adultTS;
cout<<"Enter the number of child tickets sold: ";
cin>>childTS;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>charitypercent;
cout<<endl;
cout<<"Movie: "<<name<<endl;
total=(adultTP*adultTS)+(childTP*childTS);
cout<<"Total amount generated from ticket sales: $"<<total<<endl;
donation=total/charitypercent*100;
cout<<"Donation to charity("<<charitypercent<<"%): "<<donation<<endl;
remaining=total-donation;
cout<<"Remainig amount after donation: $"<<remaining;
}  