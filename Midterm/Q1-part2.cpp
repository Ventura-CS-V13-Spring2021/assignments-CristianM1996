#include <iostream>
#include <fstream>
using namespace std;

main(){
  ifstream rdFile;
  string studName;
  int numStud, score1, score2;
  double sum, avg;
  rdFile.open("students.txt");
  sum = 0;
  rdFile >> numStud;

  while(rdFile >> studName >> score1 >> score2 >> numStud){
    cout << "Student Name: " << studName << endl;
    cout << "Score 1: " << score1 << endl;
    cout << "Score 2: " << score2 << endl;
    cout << " " << endl;
    sum = score1 + score2;
  }
  rdFile.close();
  avg = sum / numStud;
  cout << "Sum: " << sum << endl;
  cout << "Avg: " << avg << endl;
  
  return 0;
}