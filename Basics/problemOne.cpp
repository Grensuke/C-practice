/* Extracting the didgit that immediately follows the decimal point. */

#include <iostream>

using namespace std;

int main() {
    float num;
    cout << " Enter the require number: ";
    cin >> num;
    int firstDecimalPointOne = (num*10);
    int firstDecimalPoint = firstDecimalPointOne % 10;
    cout << " This is the first decimal point of the given number:" << firstDecimalPoint << endl;
    return 0;
}



 
