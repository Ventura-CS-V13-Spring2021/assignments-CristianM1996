#include <iostream>
#include <fstream>
using namespace std;
int isGreater(int n);
int getRandom(void);
int main(){
  int prec;
  ofstream readf;
  readf.open("numbers.txt");
  readf << isGreater(prec) << endl;
}
int getRandom(void){
  int randN, num;
  srand(time(0));
  for(int i = 0; i < 10; i++){
    randN = rand() % 50;
    num = isGreater(randN);
  }
} 
int isGreater(int n){
  int prec = 0;

  if(prec < n){
    prec = n;    
    return 1;
  }
  else
  {
    prec = n;
    return 0;
  }
}