#include <iostream>
using namespace std;
int main(int agc, char **argv){
  double itemCost;
  double inflationRate;
  int years;
  double futurePrice;

  //gather info from the user
  cout << "What is the price of the item";
  cin >> itemCost;
  cout << "What is the inflation rate? (as a decimal, ex: 0.058)";
  cin >> inflationRate;
  cout << "In how many years would you like to know the price of the item";
  cin >> years;

  //calculate new price
  futurePrice = (itemCost + (itemCost * inflationRate)) * years;
  cout << "The price of the item in " << years << " years is " << futurePrice;

  return 0;
}
