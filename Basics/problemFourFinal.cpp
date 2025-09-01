/* Calculating the sum of digits of the number of 2 raised to the power n */

// Print -1 if n < = 0 //


#include <iostream>

using namespace std;

int main() {
    int n;
    int i;
    long long p=1;
    cin >> n;

    if (n <= 0) {
        cout << "-1" << endl;
    }

    else {
        for(i=0; i<n; i++ ) {
            p = p*2;
        } 
int sum=0;
        while (p) {
            sum = sum + p%10;
            p /= 10;
        }
        cout << sum;
        }
        
}
    
