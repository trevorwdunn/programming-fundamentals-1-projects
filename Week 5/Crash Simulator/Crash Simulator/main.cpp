//
//  main.cpp
//  Crash Simulator
//
//  Created by Trevor Dunn on 9/18/23.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    string crasherOne;
    cout << "Try to paste something that will crash the program" << endl;
    getline(cin, crasherOne);
    cout << endl << endl << endl;
    cout << crasherOne << endl << endl;
    return 0;
}
