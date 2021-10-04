#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int number, result;
  cout << "Enter any number: ";
  cin >> number;
  result = cbrt(number);;
  cout << "\n Cube Root of "<< number <<" is: " <<result;
}
