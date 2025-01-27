
/* printf("%s", st); -->  for (int i = 0; i < 3; i++){
                             printf("%c", st[i]);  
                           }*/
       
       
       
       
#include <stdio.h>
#include <string.h>

int main(){

     
    
    char st[4];
    scanf("%s", st);

    printf("The string becomes= %s", st);
    
    return 0;
}
