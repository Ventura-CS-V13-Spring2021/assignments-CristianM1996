#include <iostream>
using namespace std;

int main()
{
  int n, i;
  int x, y;
  
  cout << "Enter the first number for your range: ";
  cin >> x;
  cout << "Enter the second number for your range: ";
  cin >> y;

  for (n = x; n <= y; n++)
  {
      for (i = 2; i <= n ; i++)
      {
        if (n % i == 0)
        break;
      }
      if (i == n)
        cout << n << " is prime.\n";
  }  
}