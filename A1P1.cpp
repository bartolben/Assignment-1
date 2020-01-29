#include <iostream>
using namespace std;
int main(int argc, char **argv){
  //declare the variables
  double userOunces;
  double userTons;
  double numBoxesForTon;

  //get user input and calculate
  cout << "Enter the amount of weight of your cereal box (oz): ";
  cin >> userOunces;
  userTons = userOunces / 35273.92;
  cout << "Your box weighs " << userTons << " tons!" << endl;

  numBoxesForTon = 35273.92 / userOunces;

  cout << "It would take " << numBoxesForTon << " boxes of cereal to weigh a ton!";

  return 0;

}
