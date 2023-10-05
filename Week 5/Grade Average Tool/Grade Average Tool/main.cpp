//
//  main.cpp
//  Grade Average Tool
//
//  Created by Trevor Dunn on 9/13/23.
//

/* September 15, 2023
    - I was thinking I could use functions to make this program much more dynamic. Will look into that today.
*/

#include <iostream> //input and output
#include <string> //strings
#include <iomanip> //setprecision; format output
using namespace std;

int main()
{
    //Declaring my numberGradeValue and userName variables
    string userName;
    int firstGradeValue;
    int secondGradeValue;
    int thirdGradeValue = 0;
    double assignmentAverage;
    //Declaring my numberGradeName variables
    string firstGradeName;
    string secondGradeName;
    string thirdGradeName;
    
    //Declare className variable
    string className;
    
    
    //Delivering the prompts
    cout << "What is your name? " << endl;
    getline(cin, userName);
    
    cout << "What is the class called? " << endl; //this line may be optional.
    //cin >> className;
    getline(cin, className);
    
    //Get the names of the assignments
    cout << "What was the name of your first assignment? " << endl;
    getline(cin, firstGradeName);
    
    cout << "What was the name of your second assignment? " << endl;
    getline(cin, secondGradeName);
    
    cout << "What was the name of your third assignment? " << endl;
    getline(cin, thirdGradeName);
    
    
    //Get the grades for the assignments.
    cout << "What grade did you receive on " << firstGradeName << "? If it's a decimal, round it down." << endl;
    cin >> firstGradeValue;
    
    cout << "What grade did you get on " << secondGradeName << "? If it's a decimal, round it down." << endl;
    cin >> secondGradeValue;
    
    cout << "What grade did you get on " << thirdGradeName << "? If it's a decimal, round it down." << endl;
    cin >> thirdGradeValue;
      
    
    //Compute class average.
    //First, I need to create doubles for use with the equation.
    double gradeOne = static_cast<double> (firstGradeValue);
    gradeOne = firstGradeValue;
    double gradeTwo = static_cast<double> (secondGradeValue);
    gradeTwo = secondGradeValue;
    double gradeThree = static_cast<double> (thirdGradeValue);
    gradeThree = thirdGradeValue;
    assignmentTotal = gradeOne + gradeTwo + gradeThree;
    assignmentAverage = assignmentTotal / 3; //This works as intended. Now I need to make sure it only prints to one decimal place.
    cout << endl << userName << ", your average in " << className << " is " << setprecision(3) << assignmentAverage << endl; //I'm not sure if I'm intended to use setprecision here, but I found it online and it seemed like the simplest solution.
    
    //Create the array
    //int gradeArray [3] = { firstGradeValue, secondGradeValue, thirdGradeValue};
    //cout << gradeArray << endl;
    
    cout << "Your grades were the following: " << endl;
    //Print the grades as a table
    cout << firstGradeName << ": " << firstGradeValue << endl << secondGradeName << ": " << secondGradeValue << endl << thirdGradeName << ": " << thirdGradeValue << endl << endl;
    
    
return 0;
}



/* Things to do:
    1) Set up a function to change the "mode"
    2) Set up an array to store all of the values
    3) Set up an array to store all assignment names
    4) Set up an input/output to ask for the number of assignments.
 */
