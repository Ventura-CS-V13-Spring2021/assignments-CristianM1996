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
    cout << "Employee ID: " << empID;
    cout << "Salary: " << sal;
    cout << "Department Number: " << deptN;
    cout << "Employee Number: " << empN;
    sum = sum + sal;
  }
    rdfile.close();
    avg = sum/numEmp;
    cout << "Total: " << sum << "  Average: " << avg << endl;
}