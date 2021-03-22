#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int randN;
	int N;
	ofstream readf;
	readf.open("randN.txt");

	cout << "Enter the amount of random number: ";
	cin >> N;
	readf << N << endl;
	srand(time(0));
	for(int i; i < N; i++)
	{
	randN = random() % 100;
	readf << randN << endl;
	}
	readf.close();

	int sum=0;
	ifstream rdfile;
	rdfile.open("randN.txt");

	// (1) 
	// Before the loop, MIN and MAX must be initialized as 100 and 0
	// or initialized ad the first random number.
  int MIN;
  int MAX;
  int count = 0;
  MIN = 0;
  MAX = 100;
	while(rdfile >> randN)
	{
		sum += randN;
		cout << randN << endl;
    count++;
      if(randN > MAX)
        MAX = randN;
      else if (randN < MIN)
        MIN = randN;
    

		// (2) Here you can add the code to find MIN and MAX
		// You can use the same code that we already used in other examples
		
	}
  cout << "MAX: " << MAX << endl;
  cout << "MIN: " << MIN << endl;
	cout << "Sum: " << sum << endl;
	rdfile.close();

	double avg;
	avg = sum / (N + 1.0);
	cout << "Average:  " << avg << "\n";
	cout << "Total number of integers: " << N + 1;
}