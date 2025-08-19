/*  You are given two numbers that has n digits. Write a program in C++ to extract the second last digit
 of those 2 numbers and print the sum of extracted digits.

In the event of either number being an invalid number - like the number being lesser than 10 - the
 program must print 'Invalid number'.*/



#include <iostream>

using namespace std;

int main() {
    
    int x;
    int y;

    cout << " Enter the first number: ";
cin >> x;

cout << " Enter the second number: ";
cin >> y;

    int a = (x/10) % 10;
    int b = (y/10) % 10;
    int c = (a+b);
    
    if ( x < 10 || y < 10 ) {
        cout << "Invalid number " << endl; 
    }

    else { 
        cout << " The sum of second last digits of given number is: " << c  << endl;
    }

    return 0;
}