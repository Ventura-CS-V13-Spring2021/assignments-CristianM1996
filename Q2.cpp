#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cout << "Enter three integer values between 0 and 99: " ;
  cin >> num1 >> num2 >> num3 ;

  if(num1 == num2)
    cout << "There are two integers that are equal." << num1 << "and" << num2 << endl;
  if(num2 == num3)
    cout << "There are two integers that are equal." << num2 << "and" << num3 << endl;
  if(num1 == num3)
    cout << "There are two integers that are equal." << num1 << "and" << num3 << endl;
  else if(num1 == num2 && num2 == num3)
    cout << "All integers are equal." << num1 << num2 << num3 << endl;
  
  return 0;

}