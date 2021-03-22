#include <iostream>
using namespace std;

int num;
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
    else if(randN < num && randN > num)
      num = randN;
    cout << randN << endl;
  }
  cout << "Number 1: " << num << endl;
  cout << "Number 2: " << MAX << endl;
}