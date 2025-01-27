// %p = Format specifier for printing pointer address
// %u = Format specifier for undefined integer
// * --> value 
// & --> address

#include <stdio.h>
        /*  
            #include <stdio.h>
            int main (){
            int i = 8;
            int *j;
            j = &i;
            printf("add i= %u\n",&i);
            printf("add i= %u\n",j);
            printf("add j= %u\n",&j);
            printf("value i= %d\n",i);
            printf("value i= %d\n",*(&i));
            printf("value i= %d\n",*j);
            return 0;  
        */


 // j is a pointer pointing to i (j is an integer pointer)

int main(){
    int i = 72;
    int* j = &i; 
    int l = 67;

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &l);


    printf("The value at address j is %d\n", *(&i));   

    #include <stdio.h>





 // b is a pointer pointing to a (b is a character pointer) 

    char a = 'A';
    char* b = &a; 
    float k = 5.232;
    float* k1 = &k; 
   

    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", b);
    printf("The address of a is %p\n", &k);


    printf("The value at address b is %d\n", *(&a));

   
   
    return 0;
}
