/*
  This is a block comment
  We can write multiple lines of comments
  Comments are used by humans, not the compiler. 
  Trevor Dunn
  August 28, 2023
  My First Program
*/

#include <iostream> // Line comment - Code for input and output. 
#include <string>
using namespace std;

// Write the main function
// Every C++ program has a main function. 
// All of the below is a function definition. 
// main is the entry point to the program. 
int main() { // This line is a function header
  //Everything between the braces is the function body. 
  cout << "Hello, world!" << endl; // endl is end line; // cout is c(++)-output
  //Everything between the braces is the function body
  // << is the insertion operator

  string firstName;
  cout << "What is your first name: ";
  // >> is the extraction operator
  cin >> firstName;
  cout << "Hello, " << firstName << endl;

  return 0;
}


