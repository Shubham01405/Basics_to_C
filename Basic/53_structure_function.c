#include<stdio.h>
#include<string.h>



struct employee
{
    int code;
    char name[50];
    float salary;
};

// Function should after structure body
void show(struct employee e);

void show(struct employee e){
    printf("Code is %d \nSalary is %f \nName is %s", e.code, e.salary, e.name);
}

int main(){
    struct employee e1;
    e1.code= 53;
    e1.salary= 75;
    strcpy(e1.name, "Shubham");
    show(e1);

    return 0;
}