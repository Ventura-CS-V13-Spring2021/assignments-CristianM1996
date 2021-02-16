#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double rateA = 15.00;
  const double rateB = 12.00;
  const double rateC = 9.00;

  int seatA, seatB, seatC;

  cout << "Enter the number of tickets sold for Class A: ";
  cin >> seatA;
  cout << "Enter the number of tickets sold for Class B: ";
  cin >> seatB;
  cout << "Enter the number of tickets sold for Class C: ";
  cin >> seatC;

  double totalA = rateA * seatA;
  double totalB = rateB * seatB;
  double totalC = rateC * seatC;
  double total = totalA + totalB + totalC;

  cout << "A total of $" << fixed << showpoint << setprecision(2) << total << " has been made." << endl;

}

