#include <stdio.h>
#include <string.h>

int main() {
    int N, K;

    // Prompt user to enter the number of entries and read input from user
    printf("Enter the number of entries: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        // If scanf() fails to read input or entered value is not positive, print an error message and exit program with failure status
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // Declare arrays to store details for each entry
    char name[N][10], gender[N], fixedPhone[N][15], mobilePhone[N][15];
    int year[N], month[N], day[N];

    // Loop over each entry to prompt user to enter details and read input from user
    for(int i = 0; i < N; i++) {
        printf("Enter details for entry %d: ", i + 1);
        if (scanf("%s %d/%d/%d %c %s %s", name[i], &year[i], &month[i], &day[i], &gender[i], 
            fixedPhone[i], mobilePhone[i]) != 7) {
            // If scanf() fails to read all 7 inputs, print an error message and exit program with failure status
            fprintf(stderr, "Invalid input\n");
            return 1;
        }
    }

    // Prompt user to enter the number of entries to retrieve and read input from user
    printf("Enter the number of entries to retrieve: ");
    if (scanf("%d", &K) != 1 || K <= 0) {
        // If scanf() fails to read input or entered value is not positive, print an error message and exit program with failure status
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // Declare array to store the indices of the entries to retrieve
    int take[K];

    // Loop over each entry index to retrieve and print details to the user
    for(int i = 0; i < K; i++) {
        if (scanf("%d", &take[i]) != 1 || take[i] >= N) {
            // If scanf() fails to read input or entered value is outside of valid range, print an error message and continue looping
            printf("Sorry, requested entry %d is not found.\n", take[i]);
            continue;
        }
        
        printf("Details for entry %d: Name=%s Gender=%c Date of Birth=%d/%d/%d Fixed Phone=%s Mobile Phone=%s\n",
            take[i], name[take[i]], gender[take[i]], day[take[i]], month[take[i]], year[take[i]], fixedPhone[take[i]], mobilePhone[take[i]]);
    }

    return 0;
}