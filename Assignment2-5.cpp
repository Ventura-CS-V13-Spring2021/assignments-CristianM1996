///////look over /////////


#include <iostream>
using namespace std;

int main()
{
  int num, i;
  int x, y;
  
  cout << "Enter your range of numbers: ";
  cin >> x >> y;

  for (num = x; num <= y; num++)
  {
      for (i = 2; i < num ; i++)
      {
        if (num % i == 0)
        break;
      }
      if (i == num)
        cout << num << " is prime.\n";
      else
        cout << num << " is NOT prime.\n";
  }  
  
}