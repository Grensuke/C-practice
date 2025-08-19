/* Finding the greatest in the given four numbers */
#include <iostream>
using namespace std;
 
int main() {
int a;
int b;
int c;
int d;

cout << " Type the number a: ";
cin >> a;

cout << " Type the number b: "; 
cin >> b;

cout << " Type the number c: ";
cin >> c;

cout << " Type the number d: ";
cin >> d;

if (a > b && a > c && a > d) {
cout << a;
}
else if (b > a && b > c && b > d) {
    cout << b;
}
else if (c > a && c > b && c > d) {
    cout << c;
}
else {
    cout << d;
}
  return 0;

}