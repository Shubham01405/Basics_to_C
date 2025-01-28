// READ


#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("shubh.txt", "r");

    if (ptr == NULL)  // To check if file exists or not
    {
        printf("The file does not exists sorry!! \n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
    }

    fclose(ptr);

    return 0;
}
   