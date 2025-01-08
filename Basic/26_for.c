#include <stdio.h>

int main(){

    // Incrementing
    printf("Incrementing\n");

    int n = 6;    
    for(int i =0;i<n;i++){
        printf("The value of i is %d\n", i);
    }

    printf("\n\n\n");

    // Decrementing
    printf("Decrementing\n");

    for (int i=5; i; i--){   
        // When (i=0) False;
        // When (i!=0) True 
        printf("The value of i %d\n", i);
    }
    return 0;
}