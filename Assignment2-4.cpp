#include <iostream>
using namespace std;


int main(){

  int a = 65;
    while (a <= 90){
      if (a == 64 || a == 69 || a == 74 || a == 79 || a == 84 || a == 89){
        cout << static_cast<char>(a) << " " << endl;
      }
      else{
        cout << static_cast<char>(a) << " ";
      }
      a++;
    }
}