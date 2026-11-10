#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sixtyone(){
    //Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places.
    double x, value;

    printf("Input a non zero number you want: \n");
    scanf("%lf", &x);

    if(x != 0.0){
        value = sin(1.0 / x);
        printf("The sin of (1/x) is %0.4lf\n", value);
    } else {
        printf("The number can not be 0");
    }
    return 0;
}

int main(){
    //The only reason of this function is to call every other function.
    sixtyone();
    return 0;
}
