#include <iostream>
#include <fstream>
using namespace std;
int isGreater(int n);
int getRandom(void);
int main(){
  //ofstream readf;
  //readf.open("numbers.txt");
  
}
int getRandom(void){
  
  int randN, num;
  ofstream readf;
  readf.open("numbers.txt");
  srand(time(0));
  do{
    randN = rand() % 50;
    readf << randN << endl;
    num = isGreater(n);
  }while(num == 1);
} 
int isGreater(int n){
  int prec

  if(prec < n){
    prec = n;
    
  }
}