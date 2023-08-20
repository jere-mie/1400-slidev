#include <stdio.h>

int isPrime(int number) {
    if (number <= 1)
        return 0;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int calculatePFact(int n) {
    int pFactorial = 1;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            pFactorial *= i;
    }

    return pFactorial;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is prime.\n", number);
    else
        printf("%d is not prime.\n", number);

    int pFactorial = calculatePFact(number);
    printf("PFactorial of %d is %d.\n", number, pFactorial);

    return 0;
}
