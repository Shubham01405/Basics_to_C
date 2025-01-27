#include <stdio.h>
#include <string.h>

int main(){
    char c = 'd';
    int contains = 0;
    char str[] = "Shubham";
    
    
    for (int i = 0; i < strlen(str); i++)
    {
       if(str[i] == c){
        contains = 1;
        break; // This break statement will exit the loop once the character is found!
       }
    }
    if(contains){
        printf("Yes it contains!\n");
    }
    else{
        printf("Does not contain! \n");
        
    }
    
    return 0;
}