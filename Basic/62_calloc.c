#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    //allocates contiguous space in memory for n blocks (floats)

    // int arr[n]; // Not allowed in c
    ptr[0] = 3; 
    printf("%d", ptr[0]);
    return 0;
}