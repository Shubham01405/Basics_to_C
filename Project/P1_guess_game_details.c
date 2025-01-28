// # Steps
    // 1. Import required libraries
    // 2. Make a random program
    // 3. Use do-while loop for at least 1 iteration 
    // 4. Can use any loop
    // 5. Give detailing in the Loop
    // 6. Print the output


/* #include <stdio.h> → For input/output functions (printf).
 #include <stdlib.h> → For rand() and srand().
 #include <time.h> → For time() to seed the random number generator.
 srand(time(0)); → Seeds the random number generator to ensure different output each time.

 rand() → Starts with 0 to maximum
 (rand() % 100)+ 1; → Generates a random number between 1 to 100.
 rand() % 100; → Generates a random number between 0 to 100.
 rand() % 3; → Generates a random number between 0 to 2

 printf() → Prints the generated random number. */




#include <stdio.h>
#include <stdlib.h>  // for rand() and srand() 
#include <time.h>    // 

int main() {
    // Initialize random number generator with current time as seed
    srand(time(0)); // Seeding with current time

    // Generate a random number between 1 and 100
    // rand() -> 0 to 32767
    int random_number = (rand() % 100) + 1;
    int guessed_no;
    int no_of_guesses=0;



//     do{
//         printf("Guess your number:");
//         scanf("%d", &guessed_no);

//         if (random_number > guessed_no){
//             printf("Higher no. please!!\n\n");
//         }
//         else if(random_number < guessed_no){
//             printf("Lower no. please!!\n\n");
//         }
//         else {
//         printf("\tCongrats!!\n");
//         }
//         no_of_guesses++;
//   } while(random_number!=guessed_no);


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
