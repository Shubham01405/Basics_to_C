#include <stdio.h>

int main(){
    int year;
    printf("Enter year:");
    scanf("%d", &year);

    if (year%4 == 0 && year%100 !=0 ) {
        /*year%400==0 */

        printf("%d It is a leap year", year);
    }
    else
    printf("\n %d It is not a leap year", year);
    return 0;
}