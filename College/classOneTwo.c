#include <stdio.h>

int main() {
    int a=2,b=4,c,d,e;
    printf ("The value of a is %d\n",a) ;
    printf ("The value of b is %d\n",b) ;

    c=a+b;
    d=a-b;
    e=a*b;
    float f;
    f= (float)a/b;

    printf ("The sum of a and b is %d\n",c);
    printf ("The subtraction of a and b is %d\n",d);
    printf ("The multiplication of a and b is %d\n",e);
    printf ("The division of a and b is %f",f);
    return 0;
}