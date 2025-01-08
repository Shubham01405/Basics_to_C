// Sum first 10 natural numbers using while loop/ for loop/ do while loop


#include <stdio.h>

int main(){
    int i=1;
    int sum=0;


    // While Loop

    while(i<=10){
        // sum = sum + i
        sum += i;
        i++;

    }
    printf("The sum of first 10 natural number is: %d\n", sum);



    //For Loop
    sum=0;
    i=1;
    for(i; i<=10; i++){
        sum += i;
    }
    printf("The sum of first 10 natural number is: %d\n", sum);



    // Do While Loop
    sum=0;
    i=1;
    do{
        sum += i;
        i++;
    }while(i<=10);
    printf("The sum of first 10 natural number is: %d\n", sum);


    return 0;
}