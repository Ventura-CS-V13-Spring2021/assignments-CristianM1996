#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  int empID,numEmp;
  string empN, deptN;
  double sal;
  ofstream readf;
  readf.open("employee.txt");

  cout << "Number of employees: " << endl;
  cin >> numEmp;
  readf << numEmp << endl;
  for(int i = 0; i < numEmp; i++)
  {
    cout << "Employee ID: " << endl;
    cin >> empID;
    readf << empID << endl;
    cout << "Employee Name: " << endl;
    cin >> empN;
    readf << empN << endl;
    cout << "Department Name: " << endl;
    cin >> deptN;
    readf << deptN << endl;
    cout << "Salary: " << endl;
    cin >> sal;
    readf << sal << endl;
  }
    readf.close();
}