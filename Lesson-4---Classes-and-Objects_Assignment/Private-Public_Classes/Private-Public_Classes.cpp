/*
Name: Juan Diaz Ibarra
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Public/Private Classes Example
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
}

void startPhone(){
    cout << "Power on phone" << endl;
    cout << "brand: " << brand<<", " << "model : " << model<<", " << "Storagesize: "<<storagesize<< "GB"<<endl;
}
    void initiatePhone(){
    cout << "Applications starts running\n" << endl;
        
    } 
};


int main(){
    
  Phone phone1;
  
  phone1.startPhone();
  phone1.initiatePhone();
    
    
    
    
    
}



/*Reflection Section

Your reflection must include:
• What you understood from this example
• Any difficulties you faced
• What you searched or researched online (if anything)
• Whether you used AI (if yes, explain how)
• What you learned from completing this code


In this example I understood how effective the use of data members
and Member functions are when creating/using a class.Private ensures that
it can't not be accessed  outside of class allowing for my code to be safe
and prevent any changes being made in the future. While public allows for 
that section to be manipulated inside or outside the class allowing more 
controlled access although more of a risk.For this example I did not experence
any trouble in forming or understanding this code, nor used AI.






















*/