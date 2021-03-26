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

//