#include <iostream>
using namespace std;

int main() {
     int n,i,j,sum=0;
     cin >> n;

     int matrix[n][n];

     for (i=0; i<n; i++) {

        for (j=0; j<n; j++) {

            cin >> matrix[i][j];
            
        }
     }

     for (i=0; i<n; i++) {

        for (j=0; j<n; j++) {

            if (i >= j) {
        sum += matrix[i][j];
        
     }
            
        }
    }
        cout << sum;
     
return 0;
}