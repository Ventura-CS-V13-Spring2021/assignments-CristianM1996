#include <iostream>
using namespace std;


int main()
{
  srand(time(0));
	int randN;
  int num;
  for(int i = 0; i < 5; i++)
	{
	  randN = random() % 99;
    cout << randN << endl;
  }
  num = random() % 99;
  if(num > randN)
  cout << num << ", " << randN << endl;
}