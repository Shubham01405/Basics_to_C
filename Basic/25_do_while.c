#include <stdio.h>

int main(){
    int i=2;

    do  // do while loop = while loop which executes at least once
    {
        printf("The value of i is %d\n",i);
        i++;
    } while (i<1);
    
    return 0;
}