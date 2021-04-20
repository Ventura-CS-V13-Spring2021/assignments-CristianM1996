#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string studName;
  int numStud, score1, score2, sum, avg;
  ofstream readf;
  readf.open("students.txt");

  cout << "Number of students: " << endl;
  cin >> numStud;
  readf << numStud << endl;
  for(int i = 0; i < numStud; i++){
    cout << "Student Name: " << endl;
    cin >> studName;
    readf << studName << endl;
    cout << "Score 1: " << endl;
    cin >> score1;
    readf << score1 << endl;
    cout << "Score 2: " << endl;
    cin >> score2;
    readf << score2 << endl;
  }
    readf.close();
}