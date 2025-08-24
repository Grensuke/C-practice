#include <iostream>
using namespace std;

int main() {

    int num=1;

    while (num < 7) {

        if (num > 5) {
            cout << "Yatzy!!!" << endl;
        }

        else {
            cout << "Not Yatzy!"<< endl;
        }
        num ++;
    }
    
    return 0;
}