#include <stdio.h>

int main() {
    int a,b;

    printf("The value of a:");
    scanf("%d", &a);
    
    printf("The value of b:");
    scanf("%d", &b);

    int c,d,e;
    c=a+b;
    d=a-b;
    e=a*b;

    printf("The sum of a and b is %d \n" ,c);
    printf("The subtraction of a and b is %d \n" ,d);
    printf("The product of a and b is %d \n" ,e);


}