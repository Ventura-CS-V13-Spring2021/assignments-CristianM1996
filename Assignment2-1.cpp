#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3;
    cout << "Enter three integer values : " ;
    cin >> number1 >> number2 >> number3 ;
    
    if (number1 >= number2) {
        if (number1 >= number3)
            cout << number1 << " is the greatest value" << endl;
        else
            cout << number3 << " is the greatest value" << endl;
    }
    else {
        if (number2 >= number3)
            cout << number2 << " is the greatest value" << endl;
        else
            cout << number3 << " is the greatest value" << endl;
   }

    return 0;
}
