// Variables

#include<stdio.h>

int main(){
    
    // int a;     #Declaration
    // int a=10;  #Declaration and initialize




    // int a; ---------->  ( %d )
    // 4bytes (32bits)
    // a = 1;
    int a;  // Declaration
    a = 1;

    // float b = 1.4; -----> ( %f )
    // 4bytes (32bits)
    float b;
    b = 1.4;

    // char c ='a'; --------> ( %c )
    // 1byte (8bits)
    char c;
    c = 'a';
    

    // %d%f%c is called format specifier

    // %d is for int, %f is for float and, %c is for char

    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);

    return 0;


}


