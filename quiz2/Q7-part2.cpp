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
  rdfile >> numEmp;
  
  while(rdfile >> empID >> empN >> deptN >> sal)
  {  
    cout << "Employee ID: " << empID << endl;
    cout << "Salary: " << sal << endl;
    cout << "Department Number: " << deptN << endl;
    cout << "Employee Number: " << empN << endl;
    cout << " " << endl;
    sum = sum + sal;
  }
  rdfile.close();
  avg = sum / numEmp;
  cout << "Total: " << sum << "  Average: " << avg << endl;
  return 0;
}

//Q8-part2: I use ifstream because the code grabs the data from the txt file and when the txt file is opened and read, the data is assigned to their respective variables. A line of code was needed to grab and assign a value to numEmp (number of employees). Then it's a while-loop that grabs values from the txt file and assigns them to empID (employee ID), empN (employee name), deptN (department name), and sal (Salary). The values are then outputted. The sum is also evaluated inside the while loop because the value assigned to sal (Salary) is needed. The file is then close when the loop ends. The avg (Average) is then evaluated by dividing the sum and the number and employees. The sum and avergage is outputted. 
// I was stuck on getting the avg for a while. I kept getting a -null. I kept trying things but they all failed. Until i saw that numEmp (number of employees) wasn't even the txt file. So in part 1 i had to write numEmp into the file using * readf << numEmp * and then i used * rdfile >> numEmp; * to read the value from the txt file.