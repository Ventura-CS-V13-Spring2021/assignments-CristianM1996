#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  
  do{
  cout << "Enter three integer values from 0 to 99: " ;
  cin >> num1 >> num2 >> num3;
  }while(((num1 < 0 || num1 > 99) && (num2 < 0 || num2 > 99) && (num3 < 0 || num3 > 99)) || ((num1 < 0 || num1 > 99) || (num2 < 0 || num2 > 99) || (num3 < 0 || num3 > 99)));

  if (num1 != num2 && num2 != num3 && num1 != num3)  
        cout << "There are no duplicate numbers." << endl;    
  else if (num1 == num2 && num2 == num3)
        cout << "All integers are duplicate: " << num1 << ", " << num2 << " and " << num3 << endl;
  else if (num1 == num2 || num2 == num3 || num1 == num3)
    if (num1 == num2)
      cout << "There are two integers that are duplicate: " << num1 << " and " << num2 << endl;
    else if (num2 == num3)
      cout << "There are two integers that are duplicate: " << num2 << " and " << num3 << endl;
    else if (num1 == num3)
        cout << "There are two integers that are duplicate: " << num1 << " and " << num3 << endl;
  
  return 0;

}

//Q4: I created a do-while loop to check if the input values are numbers in the range [0, 99], which loops if your values are outside the range. Then an if statement checks if each value is not equal to one another and if that's true, a statement is outputted. If it's false, then an else-if statement checks if each value inputted is equal to one another and if that's true, a statement is outputted. If that's false, then we move to the next else-if statement which checks if two of the values inputted are duplicate. If that's true, it moves to a nested if statement that checks if input 1 and input 2 are equal. If it's true, a statment with the two duplicate values is outputted. There is another else if statements after which check if input 2 is equal to input 3 and if that's false, moves to the next one that checks if input 1 and input 3 are equal. I did the final 3 statements so that the two duplicate values are outputted no matter what combination they are inputted in.