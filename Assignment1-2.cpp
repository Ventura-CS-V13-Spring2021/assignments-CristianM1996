#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double celsius, farenheit;
  cout << "Enter a temperature in celsius: ";
  cin >> celsius;

  farenheit = 9/5.0 * celsius + 32;

  cout << "The temperature " << celsius << " degrees in celsius is " << farenheit << " degrees in farenheit." << endl;

}