#include<iostream>
using namespace std;
main()
{
int num,sum=0;
cout<<"Enter a 5-digit number: ";
cin>>num;
sum=(num%10)+((num/10)%10)+((num/100)%10)+((num/1000)%10)+((num/10000)%10);
cout<<"Sum of the individual digits: "<<sum;
}