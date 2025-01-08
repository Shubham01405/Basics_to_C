// greatest among 4

#include <stdio.h>

int main(){
    int a=10, b=20, c=19, d=1;
    int max=a;

    if (max< b)
    max= b;
    if (max< c)
    max= c;
    if (max< d)
    max= d;

    printf( "\nMaximum among 4 no. is %d:", max);
    return 0;
}