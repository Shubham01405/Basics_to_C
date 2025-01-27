#include <stdio.h>
#include <string.h>


char* slice(char str[], int m, int n){
     
    char *ptr1 = &str[m];   // Points to the character at the mth position.
    char *ptr2 = &str[n];   // Points to the character at the nh position.
    str[n] = '\0';          // Changes the character at index n to a null character (\0)
    str = ptr1;             //Updates str to point to ptr1, so the string now starts from the mth character.
    
    return str;

}
int main(){
    char str[] = "Harry bhai";
    
    printf("%s", slice(str, 1, 7));
    return 0;
}