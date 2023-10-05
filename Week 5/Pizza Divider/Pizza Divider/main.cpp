//
//  main.cpp
//  Pizza Divider
//
//  Created by Trevor Dunn on 9/18/23.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Declare my variables
    double diameter;
    double pizzaArea;
    double numSlices = 8;
    double radius;
    double pi = 3.1415;
    
    // Gets the diameter from the user
    cout << "What is the diameter of your pizza? Please use inches. " << endl;
    cin >> diameter;
    
    // Get radius using the diameter
    radius = diameter / 2;
    
    // Calculate the area of the Pizza using the orignal unit.
    pizzaArea = (pi * (radius * radius));
    cout <<"The area of your pizza is approximately "<< setprecision(4) << pizzaArea << " inches." << endl << endl << endl;
    
    
    return 0;
}
