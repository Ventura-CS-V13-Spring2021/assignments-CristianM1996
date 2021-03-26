#include <iostream>
using namespace std;


int main()
{
  srand(time(0));
	int randN;
  int num;
  
  for(int i = 0; i < 4; i++)
	{
	  randN = random() % 99;
    num = random() % 99;
    cout << randN << endl;
    if(num > randN)
    cout << num << " > " << randN << endl;
  }
}

//the for loop has two variables that are assigned random numbers and they go through the loop 3 times. The numbers assigned to randN are printed out. An if statement checks if the value assigned to num is greater than the value assigned to randN in each loop. If it's true, the print statement stating when the current number is greater than the previous number is outputted. I tried getting it to generate only 5 numbers but got stuck and the number of values outputted are inconsistant. 