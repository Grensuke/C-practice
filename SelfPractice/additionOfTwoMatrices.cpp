#include <iostream>
using namespace std;

int main() {
     
    int n,i,j;
    
    cin >> n;
    
    int one[n][n];
    int two[n][n];
    int three[n][n];

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cin >> one[i][j];
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cin >> two[i][j];
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            three[i][j] = one[i][j] + two[i][j];
        }
    }

        for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << three[i][j] << " ";
            }
      cout << endl;
    }


    
    return 0;
}