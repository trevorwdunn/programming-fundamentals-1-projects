/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: Woodchuck
 *
 *        Version:  1.0
 *        Created:  09/06/2023 12:19:56
 *       Revision:  none
 *       Compiler:  CMake
 *
 *         Author:  Trevor Dunn
 *   Organization: Tarrant County College District
 *
 * =====================================================================================
 */
#include <iostream> // for input and output
#include <string> //for including strings
using namespace std;


int main(){
  int numWoodchucks; // the numbrer of woodchucks
  //pounds of wood that a single woodchuck can chuck in a day
  double poundsPerDay;
  //pounds of wood per year for all woodchucks together
  double totalPoundsWood;

  /*prompt the user for values for number of woodchucks
  and pounds of wood per day */
  cout << "How many woodchucks are chucking? " << endl;
  cin >> numWoodchucks;

  cout << "How many pounds can be chucked in a day? " << endl;
  cin >> poundsPerDay;

  //calculate total pounds for one year
  totalPoundsWood = poundsPerDay * 365 * numWoodchucks;
  
  // Output the results
  cout << numWoodchucks
       << " woodchucks can chuck "
       << totalPoundsWood
       << " pounds of wood in a year.\n";

       string c = "\n";
       cout << c.length() << endl;

  return 0;
}


