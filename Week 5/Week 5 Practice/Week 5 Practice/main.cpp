//
//  main.cpp
//  Week 5 Practice
//
//  Created by Trevor Dunn on 9/18/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const int NUM_STUDENTS = 3;
    double scores[NUM_STUDENTS] {96.4, 92.7, 97.3};
    scores[0] = 98.6; //write
    cout << scores[1]; //read
    cout << scores; //memory address of scores
    double avg = (scores[0]+scores[1]+scores[3])/NUM_STUDENTS;
    
    /*
     Remember:
        
        scores[n] is an array of doubles; not a double in itself
            - if you have only the array name, you don't have a double
            - if you have the bracket with the index you want to access, that is a double
     */
}
