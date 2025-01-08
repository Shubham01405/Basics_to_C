// Factorial Question

#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1

    // USING FOR LOOP:
    int product=1;
    int n=4;
    for (int i=1; i<=n; i++){
        product *=i;

    }
    printf("The factorial of %d is %d\n", n, product);


    // USING WHILE LOOP:
    int i = 1;
    product=1;
    n = 5;
    while(i<=n)
    {
        product *=i;
        i++;
    }
    printf("The factorial of %d is %d", n, product);

    return 0;
}