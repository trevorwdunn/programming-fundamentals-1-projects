//
//  main.cpp
//  CustomerInvoiceV2
//
//  Created by Trevor Dunn on 9/27/23.
//

/*
    This program will refactor CustomerINvoice to use functions
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Global variables

// Prototypes
string getCustomerName();
void getProductNames(string productNames[], int size);
void getProductCounts(const string productNames[], int productCounts[], int size);
double getAverage(const int productCounts[], int size);
void displayInvoice(string customerName, const string productNames[], const int productCounts[], int size);

int main() {
    // Variables
    const int NUM_ITEMS = 3;
    string customerName;
    string productItems[NUM_ITEMS];
    int productCounts[NUM_ITEMS];
    
    // Get Data from the User
    customerName = getCustomerName();
    cout << endl;
    getProductNames(productItems, NUM_ITEMS);
    cout << endl;
    getProductCounts(productItems, productCounts, NUM_ITEMS);
    cout << endl;
    cout << "==============================\n";
    cout << endl;
    
    // Output results
    displayInvoice(customerName, productItems, productCounts, NUM_ITEMS);
    cout << endl;
    
    
    return 0;
}

// Definitions

string getCustomerName()
{
    string name;
    cout << "Enter the customer name: ";
    getline(cin, name);
    return name;
}

/*
    Arrays are passed by reference which means that if the array is
    not marked const then any modifications to the parameter is also
    made to the argument since the parameter and the argumentare the
    same memory location.
 */

void getProductNames(string productNames[], int size)
{
    cout << "Enter the name of product 1: ";
    getline(cin, productNames[0]);
    cout << "Enter the name of product 2: ";
    getline(cin, productNames[1]);
    cout << "Enter the name of product 3: ";
    getline(cin, productNames[2]);

}

void getProductCounts(const string productNames[], int productCounts[], int size)
{
    cout << "Enter the count or product 1: ";
    cin >> productCounts[0];
    cout << "Enter the count or product 2: ";
    cin >> productCounts[1];
    cout << "Enter the count or product 3: ";
    cin >> productCounts[2];
}

double getAverage(const int productCounts[], int size)
{
    return static_cast<double> (productCounts[0] + productCounts[1] + productCounts[2]) / size;
}

void displayInvoice(string customerName, const string productNames[], const int productCounts[], int size)
{
    cout << fixed << setprecision(2) << showpoint;
    cout << "Customer: " << customerName << endl;
    cout << endl;
    
    cout << "Here are your items and counts: " << endl;
    cout << setw(20) << productNames[0] << ": " << setw(3) << productCounts[0] << endl;
    cout << setw(20) << productNames[1] << ": " << setw(3) << productCounts[1] << endl;
    cout << setw(20) << productNames[2] << ": " << setw(3) << productCounts[2] << endl;
    
    cout << setw(22) << "Average count: " << setw(6) << getAverage(productCounts, size) << endl;
}



