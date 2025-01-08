// ESCAPE Sequence

#include<stdio.h>

int main(){
    int a;
    char ch = 'a';
    ch = 'c';
    
    ch = '\n'; // represents a new line
    ch = '\t'; // represents a tab space

    printf("Hey I am good \n nice");
    printf("\n");
    printf("Hey I am good \t nice");
    printf("\n");
    printf("Hey I am good \" nice");
    printf("\n");
    printf("Hey I am good \' nice");
    printf("\n");
    printf("Hey I am good \\ nice");
    printf("\n");
    printf("Hey I am good \\n nice");

    return 0;
    
}