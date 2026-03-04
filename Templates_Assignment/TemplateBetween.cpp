//Name:Juan Diaz Ibarra
//Course: CSCI 272-1
//Assignment 2: Function Templates
#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
bool isBetween(T value, T low, T high ){
     if (low <= value && value <= high) return true;
    else return false;
    
}



int main()
{
    cout << boolalpha;
  cout <<isBetween(7,1,10) << endl;

   cout<<isBetween(12,1,10)<<endl;
   cout <<isBetween('c','a','f')<<endl;
    return 0;
}