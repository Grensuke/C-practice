#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;
    int numbers[N];
    
    int i;
    float sum,mean;

    for (i=0; i < N; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    mean = sum/N;
    
    cout << mean;


    return 0;
}