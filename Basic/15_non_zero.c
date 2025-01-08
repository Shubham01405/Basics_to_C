// True - any no. other than 0
// False - 0


#include <stdio.h>

int main(){
    
    if(1){
        printf("This if is executed!\n");

    }
    if(13143){
        printf("This if is also executed!\n");

    }
    if(2.74){
        printf("This if is also executed!\n");

    }
    if('c'){
        printf("The charcter inside if is also executed!\n");

    }
    if(0){
        printf("I m zero - I am anot executed!\n");
    }
    return 0;
}