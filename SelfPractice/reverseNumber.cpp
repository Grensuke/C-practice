/* Reversing the given input number */

#include <iostream>
using namespace std;

int main() {

    int num;
    int rev;

    cout << "Enter a number: ";
    cin >> num;
    rev = 0;

    while (num) {
        rev = rev*10 + num%10;
        num /= 10;
    }

    cout << "The reverse number is: " << rev << endl;
    
    return 0;
}