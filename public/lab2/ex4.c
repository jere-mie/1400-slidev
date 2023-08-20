/* This program generates a random number between 1 and 100 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    printf("Random number: %d\n", randomNumber);
    printf("Randmax is %d\n", RAND_MAX);
    return 0;
}
