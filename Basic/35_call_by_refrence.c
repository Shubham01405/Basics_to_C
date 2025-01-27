#include <stdio.h>


int sum(int *, int *);


// Sum should change the value of x
int sum(int* a, int* b){  // int* a= &x, int* b=&y
    *a = 6;
    return (*a + *b);  // int return = *a + *b
}

int main(){
    int x = 1, y=6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}