#include<iostream>
using namespace std;
main(){
int a;
int b;
cout<<"Enter 1st number: ";
cin>>a;
cout<<"Enter 2nd number: ";
cin>>b;
char op;
cout<<"Enter the operator(+ , -, *, /): ";
cin >>op;
if(op == '+')
{
int sum = a+b;
cout<<"Addition: "<<sum<<endl;
}
else 
if(op == '-')
{
int minus = a-b;
cout<<"Subtraction: "<<minus<<endl;
}
else 
if(op == '*')
{
int mul = a*b;
cout<<"Multiplication: "<<mul<<endl;
}
else 
if(op == '/')
{
int dvn = a / b;
cout<<"Division: "<<dvn<<endl;
}
}












