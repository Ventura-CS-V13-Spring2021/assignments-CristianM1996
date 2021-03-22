#include <iostream>
using namespace std;

int main()
{
  int i, j, x, y;
  
    cout << "First integer must be less than the second.\n";
    cout << "Enter the first integer for your range: ";
    cin >> x;
    cout << "Enter the second integer for your range: ";
    cin >> y;
    
      for(i = x; i <= y; i++)
      {
        for(j = 2; j <= i; j++)
        {
          if(i % j == 0)
          break;
      }
      if (j == i)
        cout << i << endl;
      }
}
