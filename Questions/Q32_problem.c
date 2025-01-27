// Confusion in print statement

#include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4        Evaluation order is Right to Left
    // 4 5 5        Evaluation order is left to right

    return 0;
}