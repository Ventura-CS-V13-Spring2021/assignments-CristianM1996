#include <iostream>
using namespace std;

int num = 0;
int MAX = 0;
int MIN = 99;
int main()
{
  srand(time(0));
	int randN;
  for(int i = 0; i < 5; i++)
	{
	  randN = random() % 99;
    if(randN > MAX)
			MAX = randN;
		else if (randN < MIN)
		  MIN = randN;
    else if(num < MAX && num > MIN)
      num = randN;
    cout << randN << endl;
  }
  cout << "Number 1: " << num << endl;
  cout << "Number 2: " << MAX << endl;
}