#include<iostream>
using namespace std; 
float calculateFuel(float fuel,float distance){
      if(distance*10 < 100){ 
    return fuel = 100;}
 else if(distance*10 > 100) { return fuel = distance*10 ;}
}
main(){
float distance;
float fuel;
cout<<"Enter the distance: ";
cin>>distance;
cout<<"Fuel needed: "<<calculateFuel(fuel,distance);
}