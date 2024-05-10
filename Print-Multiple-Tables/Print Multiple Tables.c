#include <stdio.h>

// Function to count the number of digits in an integer
int count_digits(int num);

int main() {
    int num, mult;

    // Prompt user to enter a positive integer and read input from user
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        // If scanf() fails to read input or entered value is not positive, print an error message and exit program with failure status
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // Print the multiplication table for the entered number
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (i >= j) {
                // Calculate the product of i and j, count the number of digits in the product, and print the multiplication expression with proper spacing
                mult = i * j;
                printf("%d * %d = %d%*s", i, j, mult, 4 - count_digits(mult), "");
            }
        }
        printf("\n");
    }
    return 0;
}

// Function definition for count_digits()
int count_digits(int num) {
    int count = 0;
    while (num != 0) {
       num /= 10;
       count++;
    }
    return count;
}
