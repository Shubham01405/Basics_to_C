// Multiplication table of 2,7,9


#include <stdio.h>

int main(){
    int a[3][10];
    int m[3]={2,7,9};

    for( int i=0; i<3; i++){
        for( int j=0; j<10; j++){
            a[i][j]= m[i] * (j+1);
        }
    }

    for( int i=0; i<3; i++){
        for( int j=0; j<10; j++){
            printf("The value of a[i][j] is %d", a[i][j]);
            printf(" \n");
            
        }
        printf("\n");
    }
    
    return 0;
}