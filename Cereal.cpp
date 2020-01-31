// Problem 1 (cereal):
// A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input) of a package
// of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed
// to yield one metric ton of cereal.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  float weight;
  cout<<"Enter weight of cereal in ounces: "<< endl;//cereal weight in ounces
  cin>>weight;
  float metricTons = weight/35273.92; //calculate metric tons
  cout<< "Metric tons: " << metricTons <<endl;


  int NumBoxes = 35273.92/weight; //calculate boxes needed for one metric ton
  cout<< NumBoxes <<" boxes of cereal are needed to yield one metric ton of cereal. "<< endl;

  return 0;
}
