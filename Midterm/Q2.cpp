#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string studName;
  ofstream readf;
  readf.open("numbers.txt");
  
}
int getRandom(void){
  int randN, num;
  srand(time(0));
  do{
    randN = rand() % 50;
    readf << randN << endl;
    num = isGreater(int n);
  }
}
