#include <iostream>
using namespace std;

int main(){
    int number1, number2, number3;
    cout << "Enter three integer values : " ;
    cin >> number1 >> number2 >> number3 ;
    
    if (number1 == number2 && number2 == number3) 
        cout << "All numbers are the same." << endl;
    else if (number1 != number2 && number2 != number3 && number1 != number3)  
            cout << "All numbers are distinct." << endl;    
    else if (number1 == number2 || number2 == number3 || number1 == number3)
            cout << "There are two duplicated numbers." << endl;
    
    return 0;
}