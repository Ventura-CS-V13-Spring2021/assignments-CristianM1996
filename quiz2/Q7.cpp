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

//Q8-Part1: First it creates a txt file and opens that file. Using ofstream because the data is going out and writing to the file. Then it asks the user to input the number of employees. The number of employees (numEmp) is then sent into the file as an integer. Next there is a for-loop that asked for the Employee ID (Integer), Employee Name (string), Department Name (string), and Salary (double), which loops based on the number of employees. Each input is sent into the employee.txt file.  