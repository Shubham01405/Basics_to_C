#include <stdio.h>

int main(){
    int age = 45;

    if(age>60){
        printf("You can drive and you are senior citizen");

        // If this runs the below will pass and not run
    }
    else if(age>40){
        printf("You can drive and you are elder");
        
        // will run if the if statement get false
        // If this runs the below will pass and not run

    }
    else if(age>18){
        printf("You can drive");

        // will run if the above statement got false
        // If this runs the below will pass and not run
    }
    else{
        printf("You cannot drive");

        // will run if the above statement got false
        // If this runs the below will pass and not run 
    }

    return 0;
}