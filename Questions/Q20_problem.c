// Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.



#include <stdio.h>

int main(){
    int n, i=1;
    printf("Enter any number:\n");
    scanf("%d", &n);
    printf("Natural nos. for %d:\n", n);

    do
    {
        
        printf("\n %d",i++);
    } while (i<=n);
    
    return 0;
}
