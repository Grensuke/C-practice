/* Printing appropriate grade based on student's score */

#include <iostream>
using namespace std;

int main() {
    int score;


    cout << " what's your score? : ";
    cin >> score;

    if (score == 0 || score <= 50) {
        cout << " NTI ";
    }

    else if (51 == score || score <= 60) {
        cout << " PI ";
    }

    else if (61 == score || score <= 70) {
        cout << " I ";
    }

    else if (71 == score || score <= 80) {
        cout << " EM ";
    }
    
    else if (81 == score || score <= 100) {
        cout << " HO ";
    }
 return 0;

    }
    

