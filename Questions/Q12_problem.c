// Calculation Failed or pass


#include <stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("Enter Marks 1:\n");
    scanf("%d", &marks1);
    printf("Enter Marks 2:\n");
    scanf("%d", &marks2);
    printf("Enter Marks 3:\n");
    scanf("%d", &marks3);
    printf("The marks are %d %d and %d\n", marks1,marks2,marks3);

    if ((marks1<33 || marks2<33 || marks3<33)){
        printf("You are failed due to less marks in individual subject\n");
    }
    else if (((marks1 + marks2+ marks3)/3 *100) <40){
        printf("You are failed due to less percentage \n");
    }
    else {
        printf("You are passed");
    }
    return 0;
}
