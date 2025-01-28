#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int User, Computer = rand() % 3;
    printf("Choose \n --> 0 for Snake,\n --> 1 for Water,\n --> 2 for Gun\n");
    scanf("%d", &User);
    printf("Computer choose %d\n", Computer);

    if (User == 0 && Computer == 0)
    {
        printf("Its a Draw!!\n");
    }

    else if (User == 0 && Computer == 1)
    {
        printf("You Win!!\n");
    }
    else if (User == 0 && Computer == 2)
    {
        printf("You Loose!!\n");
    }
    else if (User == 1 && Computer == 0)
    {
        printf("You Loose!!\n");
    }
    else if (User == 1 && Computer == 1)
    {
        printf("Its a Draw!!\n");
    }
    else if (User == 1 && Computer == 2)
    {
        printf("You Win!!\n");
    }
    else if (User == 2 && Computer == 0)
    {
        printf("You Win!!\n");
    }
    else if (User == 2 && Computer == 1)
    {
        printf("You Loose!!\n");
    }
    else if (User == 2 && Computer == 2)
    {
        printf("Its a Draw!!\n");
    }
    else{
        printf("Something went wrong!!\n");
    }

    return 0;
}