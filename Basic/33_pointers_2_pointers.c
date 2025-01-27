#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;


        // *(&a) = a
        // **(&&a) = a

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));

    return 0;
}
