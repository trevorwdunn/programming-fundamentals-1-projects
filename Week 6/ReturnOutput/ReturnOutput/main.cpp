//
//  main.cpp
//  ReturnOutput
//
//  Created by Trevor Dunn on 9/27/23.
//
// Instructions
/*
    1. Write a function that takes a string from a name
        a. In the function combine the anme with a greetings
        b. Output the greeting to the monitor
        c. Call the function in main
    2. Write a different function called makeGreeting that takes a string for a name.
        a. In the function combine the name with a greetings and assign to a variable.
        b. Return the variable from a
        c. Call the function in main and output the greeting in main.
 */


#include <iostream>
#include <string>
using namespace std;


// Function 1
void greetingCreator(){
    string userName;
    cout << "What is your name? ";
    getline(cin, userName);
    cout << ("Welcome, " + userName + "!") << endl;
}

// Function 2
string makeGreeting(){
    string userName;
    cout << "What is your name? ";
    getline(cin, userName);
    string greeting = "Welcome, ";
    string punctuation = "!";
    string newGreeting = (greeting + userName + "!");
    return newGreeting;
}

void printGreeting(string name);


int main() {
    greetingCreator();
    cout << endl << endl << endl;
    cout << makeGreeting();
    cout << endl << endl << endl;
    return 0;
}
