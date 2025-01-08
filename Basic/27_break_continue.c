#include <stdio.h>

int main(){
    
    // Break
    for( int i=0; i<15; i++){
        if( i==5 ){
            break;      // Exit the loop now!
            
        }
        printf("i is %d\n", i);
    }

    // Continue
    for( int i=0; i<15; i++){
        if( i==5 ){
            continue;   // Skips this particular iteration now!
            
        }
        printf("i is %d\n", i);
    }




    return 0;
}