/*
Name: Juan Diaz Ibarra
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Parameterized Constructor Example
Date: 02/15/2026
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
cout << "This is the default constructor"<<endl;
    
}

Phone (string b, string m, int s){//Parameterized Constructor
    brand=b; model =m; storagesize = s;
    cout << "This is the  parameterized constructor"<<endl;
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
 
 Phone phone1;// default constructor
 
 phone1.startPhone();
 phone1.initiatePhone();
 
 Phone phone2("Iphone", "Air", 512);// parametrized constructor
 
 phone2.startPhone();
 phone2.initiatePhone();
 

 /*Reflection Section

Your reflection must include:
• What you understood from this example
• Any difficulties you faced
• What you searched or researched online (if anything)
• Whether you used AI (if yes, explain how)
• What you learned from completing this code

    From this example I learned that the Parameterized constructor
is used to change the default values allow for more customization.
The use of this constructor allows us to make the object more specfic
then simply giving it a random variable, it gives more options to work 
with making more flexible to create differnet brands, years or models.
For this example I did use AI to first further example what it means to 
"initialize" an object and provide a easier way to example this coding example.
 









*/

 
 
 
 
 
 
 
 
 
}