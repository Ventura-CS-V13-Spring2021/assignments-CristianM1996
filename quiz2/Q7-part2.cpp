#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream rdfile;
  int empID, numEmp;
  string empN, deptN;
  double sal, avg, sum;
  rdfile.open("employee.txt");
  sum = 0;

  while(rdfile >> empID >> sal >> deptN >> empN)
  {
    cout << empID;
    cout << sal;
    cout << deptN;
    cout << empN;
    sum = sum + sal;
  }
  rdfile.close();
  avg = sum/numEmp;
  cout << "Total: " << sum << "  Average: " << avg;
