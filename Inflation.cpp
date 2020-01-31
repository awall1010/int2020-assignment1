// Problem 4 (inflation):
// It is difficult to make a budget that spans several years, because prices are not stable. If your company
// needs 200 pencils per year, you cannot simply use this year’s price as the cost of pencils two years from
// now. Because of inflation the cost is likely to be higher than it is today. Write a program to gauge the
// expected cost of an item in a specified number of years. The program asks for the cost of the item, the
// number of years from now that the item will be purchased, and the rate of inflation. The program then
// outputs the estimated cost of the item after the specified period. Have the user enter the inflation rate as a
// per- centage, such as 5.6 (percent). Your program should then convert the percentage to a fraction, such
// as 0.056, and should use a loop to estimate the price adjusted for inflation. (Hint: Use a loop.)
#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  double inflationRatePerc;
  double itemCost;

  int yearsTillPurchase;
  cout<< "Enter cost of item: "<<endl; //prompt user for all necessary variables
  cin>> itemCost;
  cout<< "Enter inflation rate as a percentage: "<<endl;
  cin>> inflationRatePerc;
  cout<<"Enter years till purchase: "<<endl;
  cin>> yearsTillPurchase;
  // double total = itemCost;
  double infRate = (inflationRatePerc/100);
  for (int i = 0; i < yearsTillPurchase; ++i) { //calculate the cost every year
    itemCost *= 1+(infRate);

  }
  cout<<"the estimated cost is: $" << itemCost <<endl; //print out final cost
  return 0;
}
