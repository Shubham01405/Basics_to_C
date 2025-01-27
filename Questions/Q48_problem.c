// strlen()

#include <stdio.h>


int mystrlen(char str[]){
    int i=0, count;
    char c = str[i];  // c stores 'H'
    while(c!='\0'){
        c = str[i];  // Runs until '\0' not come
        i++;
    } 
    count = i-1;
    return count;

}
int main(){
    char str[] = "Harry bhai";
    
    printf("%d", mystrlen(str));
    return 0;
}

