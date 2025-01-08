#include <stdio.h>

int main(){
    int a = 4;
    int b = 3;
    int c = a + b;   // Addition
    int d = a - b;   // Substraction
    int e = a * b;   // Multiplication
    int f = a / b;   // Division
    int g = a % b;   // Remainder

    // Modulus operator is used to get the remainder

    printf("The value of a is %d and the value of b is %d and sum is %d\n", a,b,c);
    printf("The value of a is %d and the value of b is %d and substract is %d\n", a,b,d);
    printf("The value of a is %d and the value of b is %d and multiply is %d\n", a,b,e);
    printf("The value of a is %d and the value of b is %d and divide is %d\n", a,b,f);
    printf("The remainder when a is divided by b is: %d\n", g);
    return 0;
}