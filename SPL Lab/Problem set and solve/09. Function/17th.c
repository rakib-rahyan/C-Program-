// in geeks for geeks
#include <stdio.h>
#include <stdbool.h>

// Function to determine if a number is prime
bool IsPrime(int num) {
    if (num <= 1) {
        return false; // Numbers <= 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) { // Check divisibility from 2 to sqrt(num)
        if (num % i == 0) {
            return false; // If divisible by any number other than 1 and itself, not prime
        }
    }
    return true; // If no divisors, it's prime
}

int main() {
    int num;

    // Sample input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime and print the result
    if (IsPrime(num)) {
        printf("%d is Prime\n", num);
    } else {
        printf("%d is Not prime\n", num);
    }

    return 0;
}
