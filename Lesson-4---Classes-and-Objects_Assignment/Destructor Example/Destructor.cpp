/*
Name: Juan Diaz Ibarra
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Destructor Example
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

~Phone(){ //Destructor
cout<<"Object is destroyed"<< endl;
}

Phone (string b, string m, int s){//Parameterized Constructor
    brand=b; model =m; storagesize = s;
    
}


Phone(const Phone & other){//Copy Constuctor
    brand = other.brand; model =other.model; storagesize = other.storagesize;
    
    
}





void startPhone(){
    cout << "Power on phone" << endl;
    cout << "brand: " << brand<<", " << "model : " << model<<", " << "Storagesize: "<<storagesize<< "GB"<<endl;
    cout <<"Before being destroyed\n"<< endl;
    
}
    void initiatePhone(){
    cout << "Applications starts running\n" << endl;
        cout <<"Before being destroyed"<< endl;
    } 
};

int main(){



Phone phone2("Iphone", "Air", 512);

Phone phone3(phone2);


phone2.startPhone();
phone3.startPhone();



 

}

/*Reflection Section

Your reflection must include:
• What you understood from this example
• Any difficulties you faced
• What you searched or researched online (if anything)
• Whether you used AI (if yes, explain how)
• What you learned from completing this code


In this example I learned that the use of the destructor allows
for an object when called to be destroyed. This can be
useful as it cleans up reources that are not needed or not being 
used freeing up memory and space. This can prevent any slowdons in 
your program or crashes. I did do some research in further seeing and 
understanding the benefits of using the destructor.




*/



