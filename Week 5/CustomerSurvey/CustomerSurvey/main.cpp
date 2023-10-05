//
//  main.cpp
//  CustomerSurvey
//
//  Created by Trevor Dunn on 9/18/23.
//

#include <iostream> // input and output
#include <string> // strings
#include <iomanip> // format the output
using namespace std;

int main() {
    //Declare some variables
    const int NUM_ITEMS = 3;
    string customerName;
    string productItems[NUM_ITEMS]; // aray of strings
    int productCounts[NUM_ITEMS]; // array of intergers
    double averageCount;
        /*
            productItems and productCounts are parallel arrays.
            productItems[0] <=> productCounts[0]
            productItems[1] <=> productCounts[1], etc.
         */
   // double averageCount;
    
    // Get the name of the customer
    // The customer can have a first and last name
    /*  Note:
        cin >> customerName;    // Cannot use in this case
        This will only read to the first white space.
        Joe Friday, we only get Joe
     */
    // getline() gets the entire line from the keyboard. (everything from the first character to the enter key)
    // Two parameters. The first is a stream, the first is a stream. The second is a string.
    cout << "Enter the customer first and last name: ";
    getline(cin, customerName);
    cout << endl; // Gives us a blank line
    
    // Now get the names of the products. Each product
    // can have a name of multiple words
    cout << "Enter the name of product 1: ";
    getline(cin, productItems[0]);
    cout << "Enter the name of product 2: ";
    getline(cin, productItems[1]);
    cout << "Enter the name of product 3: ";
    getline(cin, productItems[2]);
    cout << endl << endl;
    
    // Now get the count of each product
    cout << "Enter the count of " << productItems[0] << ": ";
    cin >> productCounts[0];
    cout << "Enter the count of " << productItems[1] << ": ";
    cin >> productCounts[1];
    cout << "Enter the count of " << productItems[2] << ": ";
    cin >> productCounts[2];
    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << endl;
    
    // Calculate the average count of all the items
    // static_cast<data_type>(value)
    averageCount = static_cast<double>(productCounts[0] + productCounts[1] + productCounts[2]) / NUM_ITEMS;
    
    // Fix the stream so that it will only display 2 decimal places
    /* 
     	iomanip
        fixed - turns off scientific notation
        setprecision(n) gives us a n decimal places with fixed, or n significant digits without fixed
        showpoint places a decimal point even if all places are zero, i.e. 3.00 instead of 3
        iomanip tokens can be sticky (persistent) or nonsticky, which means it applies only to one input
        fixed, setprecision, and showpoint are sticky
     */
    cout << fixed << setprecision(2) << showpoint;
    // Display output
    cout << "Customer: " << customerName << endl;
    cout << endl;
    
    /*
        iomanip
        setw(n) is an iomanip token that puts a field of n characters into the string.
            setw(n) is not sticky
        right will right justify the characters in the field
        left will left justify the characters in the field
        right and left are sticky
        
     */
    cout << "Here are your items and counts:" << endl;
    cout << setw(24) << productItems[0] << ": " << setw(4) << productCounts[0] << endl;
    cout << setw(24) << productItems[1] << ": " << setw(4) << productCounts[1] << endl;
    cout << setw(24) << productItems[2] << ": " << setw(4) << productCounts[2] << endl;
    cout << endl;
    
    cout << "Average count: " << averageCount << endl;
    cout << endl;
    
    cout << "Thank you for shopping smart\n";
    cout << "Thank you for shopping S-mart\n";
    
    return 0;
}
