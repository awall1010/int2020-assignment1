// Problem 3 (employeepay):
// An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
// are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
// for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
// $10 per week is withheld for medical insurance. Write a program that will read in the number of hours
// worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
// the net take-home pay for the week.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  float hourlyWage = 16.00;
  float hoursWorked;
  cout<< "enter amount of hours worked this week: " << endl;
  cin>> hoursWorked;
  float weeklyWagePreTax = hourlyWage * hoursWorked;
  float SStax = weeklyWagePreTax*.06;
  float fedIncTax = weeklyWagePreTax * .14;
  float stateIncTax = weeklyWagePreTax * .05;
  float medInsur = 10.0;

  float wagePostTax= weeklyWagePreTax - SStax - fedIncTax-stateIncTax-medInsur;
  cout<< "Gross Pay: " << weeklyWagePreTax<< endl;
  cout<< "Social Security Tax:" << SStax <<endl;
  cout<< "Federal Income Tax: " << fedIncTax<< endl;
  cout<< "State Income Tax: " <<stateIncTax << endl;
  cout<< "Medical Insurance: "<<medInsur << endl;
  cout<< "Net Take Home Pay: $"<<wagePostTax<<endl;
  return 0;
}
