// Name:Juan Diaz Ibarra
// Course: CSCI 272
// Assignment 2 - Strings
// Date:2/17/26




// Part A- Coding Tasks 

#include <iostream>
#include <vector>
#include <string>
using namespace std;




 //For Scenario 2 
////////////////////////////////////////////////////
/*double getAverage(const vector <int>& ids){
    int sum = 0;
    for (int id : ids){
       sum += id; 
    }
    return static_cast<double>(sum) / ids.size();
    
}
int getHighest(const vector <int>&ids){
    
int highest_ID =ids[0];
for (int id : ids)
if (id > highest_ID){
    highest_ID = id;
}
return   highest_ID;
}*/
////////////////////////////////////////////////////   
  
    

int main()
{
    
//Scenario 1 : John Jay Caferteria Menu
 vector<string> menu;

menu.push_back(" Pizza ");
menu.push_back(" Chicken Salad ");
menu.push_back(" Penne alla vodka ");
menu.push_back(" Blueberry Muffins ");
menu.push_back(" Burger");

menu.insert(menu.begin()+1, "Sandwich");

menu.erase(menu.begin()+3);


for (const string dish : menu){
    cout << dish;
}


/*
//Scenario 2 : Student Club Attendance
vector <int> studentIDs = {72941, 06345, 44197, 22063, 59712, 30846, 91570, 26489, 17354, 68029};

    double average = getAverage(studentIDs);
    cout << "The average student ID is: " << average << endl; 
    
    int highest_ID = getHighest(studentIDs);
    cout <<"The highest student ID is: " << highest_ID << endl;*/
} 



//Part B- Short Relfection

//What is Big-O Notation? Explain it simpley (no math needed)
 /*Big-O Notation is used to decribe the time complexity or space complexity of algorithms.
 Its like looking at the progression of a graph or program and how much slower it can get 
 if there is too much data input is in it.*/
 
 
//Why is Big-O important for programmers? Give one real-life example (e.g., searching names in a class roster).
/*Big-O is importatn for programmers as they need to know how powerful there programs can be and what 
are there possible limits if there is too much usage of a certain resource. A real- life example can be attempting
to escape a maze. It will take time to figure out which exact path is the right path. 
You would have to try each route until you fin the right one, which waste time and energy.*/


//Why was vector a better choice than array for this problem?
/*Vector was the better choice because vectors are more versatile then an array. We can use vectors to manage a collections of elements 
and manipulate, like adding or remove them if necessary*/ 

