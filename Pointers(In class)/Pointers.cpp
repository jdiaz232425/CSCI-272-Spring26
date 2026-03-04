
// Pointers
#include <iostream>
using namespace std;


int main()
{
    
 //Step 1 : Declare a variable
    int a;
 
 //Step 2: Declare a Pointers
    int *p;
//Step 3: Make the pointer point to 'a'
// '&a' means "address of a"
    p=&a;
//Step 4: Assign a value to a
    a = 15;
//Step 5: Print values and addresses
    cout << "p (address stored in p): " << p << endl; // address of 'a'
    cout << "&p (address of pointer p): " << &p << endl; //Address of 'p'
    cout << "&a (address of a): " << &a <<endl; // Address of 'a'
    cout <<"*p (value pointe to by p): " << *p << endl; //Value of 'a'

cout << endl;
//step 6: modify the value of 'a' using the pointer
// '*p' means go to the address of p pointers to and change the value there
    *p = 14;
//Step 7: Print 'a' again and see
cout<< "a(after *p = 14):" << a << endl;


//int *p[10];
for (int  i = 0; i < 10 ++i;){
    *p[i]=i;
    cout << *p[i] << endl;}
} 
    
 