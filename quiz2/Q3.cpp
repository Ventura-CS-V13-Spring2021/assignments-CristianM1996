#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  
  do{
  cout << "Enter three integer values from 0 to 99: " ;
  cin >> num1 >> num2 >> num3;
  }while((num1 < 0 || num1 > 100) && (num2 < 0 || num2 > 100) && (num3 < 0 || num3 > 100));

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
    //if (num1 != num2 && num2 != num3 && num1 != num3)  
      //  cout << "There are no duplicate numbers." << endl;    
      //else if (num1 == num2 && num2 == num3)
        //cout << "All integers are duplicate: " << num1 << ", " << num2 << " and " << num3 << endl;
  
  return 0;

}