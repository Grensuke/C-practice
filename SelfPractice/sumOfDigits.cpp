#include <iostream>
using namespace std;

int main() {

    int n,i;
    cin >> n;
    i=0;
    

    while (n) {
        i = i + n%10;
        n /= 10;
    }

    cout << i << endl;

    return 0;
 
 }