#include <stdio.h>

int main() {
    int num, lastDigit, reversed = 0;
    
    // Prompt user to enter a 3-digit integer number and read input from user
    printf("Enter a 3-digit integer number: ");
    if (scanf("%d", &num) != 1 || num < 100 || num > 999) {
        // If scanf() fails to read input or entered value is not a 3-digit number, print an error message and exit program with failure status
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // Reverse the digits in the entered number by taking modulo 10 and adding the last digit to reversed number
    while (num != 0) {
        lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num /= 10;
    }

    // Print the reversed number
    printf("The reversed number is: %d\n", reversed);

    return 0;
}