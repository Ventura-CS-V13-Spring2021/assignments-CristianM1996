#include <iostream>
using namespace std;

int main()
{
  int i, j, x, y;
  do{
  cout << "First integer must be less than the second.\n";
  cout << "Enter the first integer for your range: ";
  cin >> x;
  cout << "Enter the second integer for your range: ";
  cin >> y;
  }while(x > y);
    
  for(i = x; i < y; i++)
  {
    for(j = 2; j < i; j++)
    {
      if(i % j == 0)
      break;
    }
  if (j == i)
    cout << i << endl;
  }
}

// Q6: I placed statements that asks the user to input two integers inside a do-while loop that checks if the first input is greater than the second input for the range to work. If it's true, the statement loops and the user is asked to input the value again. It will keep looping until the first input is less than the second. If it is, then we move on to the for-loop. The first for-loop creates a loop that goes through the range the user inputted. It checks if the first input is lower than the second and stops looping when the first input is = the the second input. The nested for-loop is a loop that checks whether the value is = 2 (greater than 1) and less than the value i (value the first loop is on). It starts at 2 and rises until it stops when the value j is = to i. The first if statment divides the value of the first loop and the value of the second loop and checks if the remainder is 0. If it's true the loop is stopped by a break statement and jumps to the first loop. Finally the values that are prime are then outputted. 