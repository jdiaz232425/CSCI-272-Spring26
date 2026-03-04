//Name:Juan Diaz Ibarra
//Course: CSCI 272-1
//Assignment 2: Function Templates
#include <iomanip>
#include <iostream>
using namespace std;

template <typename T>
   T receiptTotal(T amount, T taxPercent, T discountPercent, T tipPercent){
  T finalTotal =   amount   + taxPercent - discountPercent + tipPercent;
  cout <<fixed <<setprecision (2) <<"Final Total:" << finalTotal <<endl;
  return finalTotal;
   } 
    
    
    
    



int main()
{
    receiptTotal(100.0, 8.875, 10.0, 15.0);
    
    return 0;
}