#include <iostream>
using namespace std;


int main()
{
  srand(time(0));
	int randN;
  for(int i = 0; i < 5; i++)
	{
	  randN = random() % 99;
    //cout << randN << endl;
  }

}