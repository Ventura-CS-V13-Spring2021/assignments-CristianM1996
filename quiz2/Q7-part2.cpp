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
  
  while(rdfile >> empID >> empN >> deptN >> sal)
  {  
    cout << "Employee ID: " << empID << endl;
    cout << "Salary: " << sal << endl;
    cout << "Department Number: " << deptN << endl;
    cout << "Employee Number: " << empN << endl;
    sum = sum + sal;
  }
  rdfile.close();
  avg = sum/ numEmp;
  cout << "Total: " << sum << "  Average: " << avg << endl;
  return 0;
}