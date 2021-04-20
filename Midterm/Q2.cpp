#include <iostream>
#include <fstream>
using namespace std;
int isGreater(int n);
int getRandom(void);
int main(){
  int num;
  ofstream readf;
  readf.open("numbers.txt");
  readf << num << endl;
}
int getRandom(void){
  
  int randN, num;
  
  srand(time(0));
  do{
    randN = rand() % 50;
   
    num = isGreater(randN);
    cout << num << endl;
  }while(num == 1);
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