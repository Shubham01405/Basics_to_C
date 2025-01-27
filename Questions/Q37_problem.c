#include <stdio.h>


int* sum(int a, int b){  // int a = 4, int b =6
    int s = a+b;
    int* ptr = &s;
    printf("The sum is %d\n", s);
    return ptr;  //int* return = ptr
}

// It will show error Because it cannot return a address
/*
float* average(int a,int b){
    float avg =(a+b)/2.0;
    printf("The average is %f\n", avg);
    return &avg;
}
*/


float* average(int a, int b){
    float avg =  (a+b)/2.0;
    float * ptr = &avg;
    printf("The average is %f\n", avg);
    return ptr; //int* return = ptr
}

int main(){
    int x = 4; 
    int y = 6;
    int* ptr1;    // To hold address
    float* ptr2;  // To hold address

    ptr1 = sum(x,y);      // It will hold address
    ptr2 = average(x,y);  // It will hold address

    printf("The address of sum is %u and of average is %u", ptr1, ptr2 );

    return 0;
}