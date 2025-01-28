/*
(*ptr).code == ptr->code
here -> is known as the arrow operator.
*/

#include<stdio.h>

struct employee
{
    int code;
    char name[100];
    float salary;
};

int main()
{
    struct employee e1;
    e1.code = 50;
    struct employee *ptr;
    ptr = &e1;
    printf("%d ", (*ptr).code);  //printf("%d", ptr->code);
   
    return 0;
}