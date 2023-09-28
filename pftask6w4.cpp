#include<iostream>
using namespace std;
void determine(int score);
main(){
int score;
cout<<"Enter your score: ";
cin>>score;
determine(score);
}
void determine(int score)
{
if(score > 50)
cout<<"Pass";
else
cout<<"Fail";
}