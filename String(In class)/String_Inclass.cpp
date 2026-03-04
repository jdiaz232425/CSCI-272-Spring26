
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "Juan";
    string lastName = "Diaz";
    string fullName = firstName + " " + lastName;
   // cout << "Enter your name:" ;

//cin >> name;
    //getline(cin, name);
    cout << "Hello, " << fullName << "!\n";
// string sentence;
// cout << "Enter a sentence:";

// //save the input int eh string variable 'sentence'
// getline(cin, sentence);
// cout << "whatever: " << sentence << endl;
  
  fullName += " \"Jr. ";                 // full name = fullName + " Jr.";
  cout << fullName;
  
  //int nameSize = fullName.size();
  
  //cout << "Length of the name: " << fullName.length() << " Or Size is:"<< nameSize <<endl;
  
 // / -- slash -- foward sash
  //\ -- back slash*/
  
  /*string str1 = "apple";
  string str2= "Apple";
 if (str1 == str2){
     cout << "Equal\n";
    
 }  else if (str1 < str2){
     cout << "str1 is lexicographically less than str2\n";
 } else{
     cout << "str1 is lexicographically greater than str2\n";
 }
  
    return 0;*/
}