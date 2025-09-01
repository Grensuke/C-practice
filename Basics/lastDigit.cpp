#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int lastDigit = (num) % 10;
    cout << "The last digit of the number is: " << lastDigit << endl;
    return 0;
}