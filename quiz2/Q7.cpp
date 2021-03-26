#include <iostream>
using namespace std;

int main()
{

  int empID,numEmp;
  string empN, deptN;
  double sal;
  ofstream readf;
  readf.open("employee.txt")

  cout << "Number of employees: " << endl;
  cin >> numEmp;
  
  for(int i = 0; i < numEmp; i++)
  {
    cout << "Employee ID: ";
      cin >> empID;
    cout << "Employee Name: ";
      cin >> empN;
    cout << "Department Name: ";
      cin >> deptN;
    cout << "Salary: ";
      cin >> sal;
  }
}