/*
This program calculates the square root of a given number using the sqrt () function.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    result = sqrt(number);

    printf("Square root: %.2lf\n", result);
    return 0;
}
