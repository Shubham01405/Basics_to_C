// Multiplication table of 2,7,9


#include <stdio.h>

int main(){
    int n1,n2,n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int a[3][10];
    int m[3]={n1,n2,n3};

    for( int i=0; i<3; i++){
        for( int j=0; j<10; j++){
            a[i][j]= m[i] * (j+1);
        }
    }

    for( int i=0; i<3; i++){
        for( int j=0; j<10; j++){
            printf("The value of a[%d][%d] is %d", m[i],a[i][j]);
            printf(" \n");
            
        }
        printf("\n");
    }
    
    return 0;
}