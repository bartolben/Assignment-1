#include <iostream>
using namespace std;
int main(int argc, char **argv){
  //declare all my variables
  double hourlyWage = 16.00;
  double OTWage = 24.00;
  double allTaxes = 0.25;
  int medInsurance = 10;
  double hoursWorked;
  double OTHoursWorked;
  double earnings;
  double netEarnings;

  //obtain user input
  cout << "How many hours did you work this week?";
  cin >> hoursWorked;
  cout << "How many overtime hours did you work this week?";
  cin >> OTHoursWorked;

  //calculate gross earnings
  earnings = (hourlyWage * hoursWorked) + (OTWage * OTHoursWorked);
  netEarnings = earnings - (earnings * allTaxes) - 10;

  cout << "Your total net earnings this week was $" << netEarnings;

  return 0;
}
