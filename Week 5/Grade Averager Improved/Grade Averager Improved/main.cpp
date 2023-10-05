//
//  main.cpp
//  Grade Averager Improved
//
//  Created by Trevor Dunn on 9/19/23.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
    // Declare my variables
    string userName;
    const int ASSIGNMENT_COUNT = 3; // This determines how many assignments are to be included
    string gradeName[ASSIGNMENT_COUNT]; // Creates an array to store the assignment names.
    int gradeValue[ASSIGNMENT_COUNT]; // Creats an array to store the assignment values.
    double gradeAverage;
    
    cout << "What is your name? " << endl;
    getline(cin, userName);
    
    // Get the assignment names
    cout << "What was the name of the first assignment?" << endl;
    getline(cin, gradeName[0]);
    cout << "What was the name of the second assignment?" << endl;
    getline(cin, gradeName[1]);
    cout << "What was the name of the third assignment?" << endl;
    getline(cin, gradeName[2]);
    cout << endl << "---------------------------------------------" << endl << endl;
    
    // Get the assignment values.
    cout << "What was your grade on " << gradeName[0] << "?" << endl;
    cin >> gradeValue[0];
    cout << "What was your grade on " << gradeName[1] << "?" << endl;
    cin >> gradeValue[1];
    cout << "What was your grade on " << gradeName[2] << "?" << endl;
    cin >> gradeValue[2];
    
    // Compute the grade average
    gradeAverage = static_cast<double>(gradeValue[0] + gradeValue[1] + gradeValue[2]) / ASSIGNMENT_COUNT;
    
    // Output the formatting.
    cout << endl << endl << "---------------------------------------------" << endl << endl << endl;
    
    // The final outputs
    cout << "Assignments and their grades for " << userName << " are as follows: \n";
    cout << setw(20) << gradeName[0] << ": " << setw(6) << gradeValue[0] << endl;
    cout << setw(20) << gradeName[1] << ": " << setw(6) << gradeValue[1] << endl;
    cout << setw(20) << gradeName[2] << ": " << setw(6) << gradeValue[2] << endl;
    cout << endl << "Your grade average in the class is: " << setprecision(3) << gradeAverage << endl;
    cout << endl << "Thank you for using the grade averager tool!";
    cout << endl << endl << endl;
    
    return 0;
}
