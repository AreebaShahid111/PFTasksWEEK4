#include<iostream>
using namespace std;
void EvenorOdd(int number);
main(){
int number;
cout<<"Enter a number: ";
cin>>number;
EvenorOdd(number);
}
void EvenorOdd(int number)
{
if(number%2 == 0)
cout<<"Number "<< number<<" is even";
else if(number%2 == 1) 
cout<<"Number "<< number<<" is odd";
}
