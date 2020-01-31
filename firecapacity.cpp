// Problem 2 (firecapacity):
// Write a program that determines whether a meeting room is in violation of fire law regula- tions regarding
// the maximum room capacity. The program will read in the maximum room capacity and the number of
// people to attend the meeting. If the number of people is less than or equal to the maximum room capacity,
// the program announces that it is legal to hold the meeting and tells how many additional people may
// legally attend. If the number of people exceeds the maximum room capacity, the program announces that
// the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded
// in order to meet the fire regulations
#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int roomCapacity;
  int numPeople;
  cout<<"enter the room capacity: "<< endl;
  cin>> roomCapacity;
  cout<<"enter number of people present: " << endl;
  cin>> numPeople;

  if (numPeople<=roomCapacity) { //if less thanmax
    int peopleAllowed= roomCapacity-numPeople;
    cout<< "It is legal to hold the meeting and "<< peopleAllowed << " additional person may attend" << endl;
  }
  else{ //if greater than max
    int peopleRemoved = numPeople-roomCapacity;
    cout<< "It is illegal due to fire regulations to have this meeting and "<<peopleRemoved << " need to leave in order for it to be legal "<< endl;
  }
  return 0;
}
