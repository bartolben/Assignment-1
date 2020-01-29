#include <iostream>
using namespace std;
int main(int argc, char **argv){
  int maxOccupancy;
  int attendance;

  cout << "How many people are planning on attending the meeting?";
  cin >> attendance;
  cout << "What is the maximum occupancy of the desired meeting room?";
  cin >> maxOccupancy;

  if(attendance > maxOccupancy){
    cout << "The room does not have enough room to hold the meeting.";
  }
  else{
    cout << "The room has enough room to hold the meeting.";
  }
  return 0;

}
