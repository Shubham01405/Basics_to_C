// ASCII codes


#include <stdio.h>

int main(){
    char ch = 'b';
    printf("The Character is: %c", ch);
    printf("\nValue of Character: %d", ch);
    
    
    if( ch>=97 && ch<=122){
        printf("\nCharacter is lowercase");
    }
    else{
        printf("\nCharacter is not lowercase");
    }
    return 0;
}