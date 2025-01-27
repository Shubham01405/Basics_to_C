 /*
 scanf("%s", st);  -->  gets(st);
 printf("%s", st); -->  puts(st); 
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char st[30];
    gets(st);  // The entered string is stored in st!

    // printf("%s", st);
    puts(st);  // Put cursor to the next line
    printf("hey");

    return 0;
}