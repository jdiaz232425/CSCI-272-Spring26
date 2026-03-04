// Name: Juan Diaz Ibarra
// Course: CSCI 272
// Assignment 2 - Strings
// Date: 2/17/26

#include <iostream>
#include <string>
#include <cctype> 
using namespace std; 

//For part 3
//////////////////////////////////////////////////
/*bool caseInsensitiveCompare(const string& word1, const string& word2) {
if (word1.length() != word2.length()) {
return false;
}
for (size_t i = 0; i < word1.length(); i++) {
if (tolower(word1[i]) != tolower(word2[i])) {
return false;
}
}
return true;
}
*/
////////////////////////////////////////////
int main()
{
    //Part 1 – Full Name Processing (25 pts)
    /*string firstName = "Juan";
    string lastName = " Diaz Ibarra";
    string MfullName = firstName + "" + lastName;
    
    string fullName;
    cout << "Hello please enter your full name\n";
    getline(cin,fullName);
    cout << "Welcome " << fullName << endl;
    int fullNameLength = fullName.length();
    cout << "Length of name: "<<fullNameLength << endl;
    
    char firstChar = fullName[0];
    char lastChar = fullName[fullName.length()-1];
     cout <<"First character: " << firstChar <<endl;
     cout <<"Last character: " << lastChar <<endl;
     
     
     
     MfullName ="Mr/Ms. "+ MfullName + " Jr. ";
     cout <<"Hello "<< MfullName << endl;*/
     
////////////////////////////////////////////////////////////////////////////////
     //Part 2 – Word Search
     
     /*string sentence;
     string sub_str = "find";
     cout<< "Please write a sentence \n";
     getline(cin, sentence);
     
     cout <<"Please search a word up: ";
     cin>> sub_str;
     
     size_t found = sentence.find(sub_str);
     
     if (found != string::npos){
         cout << sub_str << " was found at  position " << found << endl; 
     }else {
         cout<<"The word " << sub_str << " was not found"<< endl;
     }*/
 /////////////////////////////////////////////////////////////////////////////
     //Part 3 – Case-Insensitive Comparison
     /*string word1;
     string word2;
     
    cout <<  "Please enter one word: ";
    cin>> word1;
    cout << "Please enter the other word: ";
    cin>> word2;
    
    if (caseInsensitiveCompare(word1, word2)) {
cout << "Strings are case-insensitive equal." << endl;}
else { cout << "Strings are not case-insensitive equal." << endl;
}
return 0;*/
///////////////////////////////////////////////////////////////////////////////

                    //Part 4- String to Number Conversion
int multiple =2;
string Number;
    cout << "Please enter a number: ";
cin >> Number;
    int num = std::stoi(Number);
cout << "Converted Integer: " << num << endl;
int Result = multiple * num;
cout << "Results: " << Result << endl;



//  double multiple =2;
// string Number2;
//     cout << "Please enter a number: ";
// cin >> Number2;
//     double num2 = std::stod(Number2);
// cout << "Converted Integer: " << num2 << endl;
// double Result2 = multiple * num2;
// cout << "Results: " << Result2 << endl;
}

 
