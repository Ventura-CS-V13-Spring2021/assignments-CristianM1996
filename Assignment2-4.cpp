#include <iostream>
using namespace std;


int main(){

  int a = 65;
    while (a <= 90){
      if (a % 5 == 4){
        cout << static_cast<char>(a) << " " << endl;
      }
      else{
        cout << static_cast<char>(a) << " ";
      }
      a++;
    }
}