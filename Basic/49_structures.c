/*
struct employee
{
int code; // This declares a new user defined data type!
float salary;
char name[10];
}; // semicolon is important


struct employee e1; // creating a structure variable
strcpy(e1.name, "harry");
e1.code = 100;
e1.salary = 71.22;
*/


#include <stdio.h>
#include <string.h>

struct employee
{
    int emp_id;
    char emp_name[50];
    float emp_salary;
};

int main(){
    struct employee e1;  //1
    e1.emp_id = 2379186;
    e1.emp_salary = 71.22;
    strcpy(e1.emp_name, "Shubham");

    printf("%d %s %f", e1.emp_id, e1.emp_name, e1.emp_salary);

    struct employee harry = {100, 71.22, "harry"};  //2
    printf("%d %f %s", harry.code, harry.salary, harry.name);
    return 0;
}
