//Name:Juan Diaz Ibarra
//Course: CSCI 272-1
//Assignment 2: Function Templates
#include <iostream>
using namespace std;


template <typename T>
T clampValue(T value, T low, T high){
   if (value < low )  return low;
   if  (value > high) return high;
   else return value;
    
}



int main()
{
    
 cout<<"Clamp int: " << clampValue( 120,  0,  100)<< endl;

 
 
cout<<"Clamp double: " << clampValue( -3.5,  0.0, 10.0)<< endl;
 
 

 cout<<"Clamp char: " <<  clampValue ('z', 'a','f')<< endl;;

 
}