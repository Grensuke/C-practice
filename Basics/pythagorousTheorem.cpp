// calculate the hypoteunse of right angle triangle

#include <iostream>
#include <cmath>
 using namespace std;

int main() 

{

 int a;
 int b;

 cout << " Side of the traingle: ";
 cin >> a;

 cout << " Another side of the traingle: ";
 cin >> b;

 int x=a*a;
 int y=b*b;
 int c=sqrt(x+y);

 cout << " The side of the hypothenese is: " << c << endl;

    return 0;

}



 

