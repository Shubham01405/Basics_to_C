// Conversion of Celsius to Fahrenheit

#include <stdio.h>

float celsius_2_fahrenheit(float);

float celsius_2_fahrenheit(float c){
    return ((9*c)/5) + 32;
}

int main(){
    float c = 45;
    printf("Celsius to Fahrenheit for %f is %.2f", c, celsius_2_fahrenheit(c));
    return 0;
}