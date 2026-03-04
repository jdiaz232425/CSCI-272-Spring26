/*
Name: Juan Diaz Ibarra
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 03/3/2026
*/

#include <iostream>
#include <string>
using namespace std; 
class Phone{
    
private:
string brand {"Samsung"};

string model = "FE";

int storagesize {256};

public: 

Phone(){ //Defualt constructor
cout<< "This is the default"<<endl;
    
}
Phone(const Phone & other){//Copy Constuctor
    brand = other.brand; model =other.model; storagesize = other.storagesize;
    
    cout<< " This is the copy"<<endl;
}


void startPhone(){
    cout << "Power on phone" << endl;
    cout << "brand: " << brand<<", " << "model : " << model<<", " << "Storagesize: "<<storagesize<< "GB"<<endl;
}
    void initiatePhone(){
    cout << "Applications starts running\n" << endl;
        
    } 
};




int main() {
    
 Phone phone1;// default constructor
 phone1.startPhone();
 phone1.initiatePhone();  


Phone phone2(phone1);
phone2.startPhone();
 phone2.initiatePhone();  

    
    
    
    
}


/*Reflection Section

Your reflection must include:
• What you understood from this example
• Any difficulties you faced
• What you searched or researched online (if anything)
• Whether you used AI (if yes, explain how)
• What you learned from completing this code

    In this example I understood that a copy consturctor creates a new object
of an existing object. This is useful as it allows the exists of two of the same 
code that do not share the same memory location. If it wsn't a copy then it can cause 
coding problems. I did hve difficulties in understanding the difference between a copy
and a defualt. However I did use Ai to clarify the differences between the two to better
under how they each work.






*/