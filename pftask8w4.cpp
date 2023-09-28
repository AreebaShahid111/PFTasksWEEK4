#include<iostream>
using namespace std;
float calculatePayableAmount(string day,float amount){
 if(day == "Sunday"){
  return amount - (amount*0.1);
}
 else {
 return amount;
}
}
main(){
float amount;
string day;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>amount;
cout<<"Payable Amount: $" <<calculatePayableAmount(day,amount);
}