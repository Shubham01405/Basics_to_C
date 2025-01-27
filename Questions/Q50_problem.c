// strcpy()


#include <stdio.h>

// strlen()
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

//strcpy()
void mystrcpy( char target[], char source[]){
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)]= '\0' ;
    

}
int main(){
    char source[] = "Harry";
    char target[30];
    mystrcpy(target, source);
    printf("%s %s", target, source);
    return 0;
}
