#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  
  ifstream rdfile;
  rdfile.open("randN.txt");


  int min = 0, max=0, num=0, avg=0,sum=0,count=0;

  
  while (rdfile >> num)
  {

    count++;
    sum += num;
    avg = sum / count;

    if(num < count)
      min == num;

  }
  cout << num;
}