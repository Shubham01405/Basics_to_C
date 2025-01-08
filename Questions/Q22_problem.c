// Reverse multiplication table

#include <stdio.h>

int main(){
    int n, i;
    printf("Enter no.:\n");
    scanf("%d", &n);

    for( i=10; i; i--){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}