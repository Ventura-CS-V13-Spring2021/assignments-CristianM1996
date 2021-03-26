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
    cout << "Employee ID: " << empID;
    cout << "\nSalary: " << sal;
    cout << "\nDepartment Number: " << deptN;
    cout << "\nEmployee Number: " << empN;
    sum = sum + sal;
  }
  rdfile.close();
  avg = sum/ numEmp;
  cout << "\nTotal: " << sum << "  Average: " << avg << endl;
  return 0;
}