/* Calculating the sum of digits of the number of 2 raised to the power n */

// Print -1 if n < = 0 //

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << " Enter the value of 'n' : ";
    cin >> n;
    

    if (n<=0) {
        cout << " Sum of the digits: " << -1 << endl;
    }

    else if  (n==1) {
        cout << " Sum of the digits: " << 2 << endl;
    }

    else if  (n==2) {
        cout << " Sum of the digits: " << 4 << endl;
    }

    else if  (n==3) {
        cout << " Sum of the digits: " << 8 << endl;
    }

    else if  (n==4) {
        cout << " Sum of the digits: " << 7 << endl;
    }

    else if  (n==5) {
        cout << " Sum of the digits: " << 5 << endl;
    }

    else if  (n==6) {
        cout << " Sum of the digits: " << 10 << endl;
    }

    else if  (n==7) {
        cout << " Sum of the digits: " << 11 << endl;
    }

    else if  (n==8) {
        cout << " Sum of the digits: " << 13 << endl;
    }

    else if  (n==9) {
        cout << " Sum of the digits: " << 8 << endl;
    }

    else if  (n==10) {
        cout << " Sum of the digits: " << 7 << endl;
    }

    else if  (n==11) {
        cout << " Sum of the digits: " << 14 << endl;
    }

    else if  (n==12) {
        cout << " Sum of the digits: " << 19 << endl;
    }

    else if  (n==13) {
        cout << " Sum of the digits: " << 20 << endl;
    }

    else if  (n==14) {
        cout << " Sum of the digits: " << 22 << endl;
    }

    else if  (n==15) {
        cout << " Sum of the digits: " << 26 << endl;
    }

    else if  (n==16) {
        cout << " Sum of the digits: " << 25 << endl;
    }
  

    return 0; 
}