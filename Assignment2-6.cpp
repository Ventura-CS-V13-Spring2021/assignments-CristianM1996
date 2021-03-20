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

    while(rdfile >> randN)
    {
      sum += randN;
      cout << randN << endl;
    }

    cout << "Sum: " << sum << endl;
    rdfile.close();
  
    double avg;
    avg = sum / (N + 1.0);
    cout << "Average:  " << avg << "\n";
    cout << "Total number of integers: " << N + 1;
}