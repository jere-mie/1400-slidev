/* 
This program solves a quadratic equation of the form ax ^2 + bx + c = 0 
using the sqrt () and pow () functions from math .h.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    }else if (discriminant == 0){
        root1 = -b / (2 * a);

        printf("Root: %.2lf\n", root1);
    }else{
        printf("No real roots exist.\n");
    }

    return 0;
}
