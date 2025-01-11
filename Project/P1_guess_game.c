#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main() {
    
    srand(time(0)); 

    int random_number = (rand() % 100) + 1;
    int guessed_no;
    int no_of_guesses=0;

     while(random_number!=guessed_no){
        printf("Guess your number:");
        scanf("%d", &guessed_no);

        if (random_number > guessed_no){
            printf("Higher no. please!!\n\n");
        }
        else if(random_number < guessed_no){
            printf("Lower no. please!!\n\n");
        }
        else {
        printf("\tCongrats!!\n");
        }
        no_of_guesses++;
    }

  printf("You Guessed the number right!!\n");
  printf("Your points = %d", no_of_guesses);

    return 0;
}