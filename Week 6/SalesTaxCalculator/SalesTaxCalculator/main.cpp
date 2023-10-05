//
//  main.cpp
//  SalesTaxCalculator
//
//  Created by Trevor Dunn on 9/26/23.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare the initial variables
    double salesTaxTotal;
    double countyTaxTotal;
    double finalValue;
    int sales;
    int salesTaxPercentage;
    int countyTaxPercentage;
    
    // Ask for the remaining variables
    cout << "What is the total amount of sales revenue? $";
    cin >> sales;
    cout << "What is the percentage of sales tax? ";
    cin >> salesTaxPercentage;
    cout << "What is the percentage of county tax ";
    cin >> countyTaxPercentage;
    
    // Perform preliminary calculations
    double salesTax;
    double countyTax;
    salesTax = salesTaxPercentage * .01;
    countyTax = countyTaxPercentage * .01;
    
    // Perform calculations
    salesTaxTotal = sales * salesTax;
    countyTaxTotal = sales * countyTax;
    finalValue = sales - salesTaxTotal - countyTaxTotal;
    
    // Perform the outputs
    cout << "Sales totaled an amount of $" << sales << endl;
    cout << "Sales tax is charged at a rate of " << salesTax * 100 << "%. This comes out to a total amount of $" << salesTaxTotal << "." << endl;
    cout << "County tax is charged at a rate of " << countyTax * 100 << "%. This comes out to a total amount of $" << countyTaxTotal << "." << endl;
    cout << "The remaining amount after taxes is $" << finalValue << "." << endl;
    
    
    return 0;
}
