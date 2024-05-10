#include <stdio.h>
#include <stdbool.h>

int main() {
    int hour = 0, minutes = 0;
    char tPeriod[] = "AM";
    bool is_valid_time_format = false;

    // Prompt user to enter time in 24-hour format
    printf("Enter time in 24-hour format (hh:mm): ");

    // Read input from user
    if (scanf("%d:%d", &hour, &minutes) != 2) {
        // If input is invalid, print an error message and exit program with failure status
        fprintf(stderr, "Invalid input format\n");
        return 1;
    }

    // Validate input
    if (hour < 0 || hour > 23 || minutes < 0 || minutes > 59) {
        // If input is invalid, print an error message and exit program with failure status
        fprintf(stderr, "Invalid input values\n");
        return 1;
    } else {
        is_valid_time_format = true;
    }

    // Convert time to 12-hour format
    if (hour >= 12) {
        hour -= 12;
        tPeriod[0] = 'P';
    }
    if (hour == 0) {
        hour = 12;
    }

    // Print the time in 12-hour format
    if (is_valid_time_format) {
        printf("The time in 12-hour format is: %02d:%02d %s\n", hour, minutes, tPeriod);
    }

    return 0;
}