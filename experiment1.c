#include <stdio.h>
#include <math.h>

int main() {
    // Array of roll numbers
    int arr[6] = {1820, 1457, 1342, 178, 1790, 1804}; 
    int n, k, found;

    // Prompt user for the number of roll numbers to check
    printf("Enter the number of roll numbers you want to check: ");
    scanf("%d", &n);

    // Loop to check multiple roll numbers
    for (int i = 0; i < n; i++) {
        printf("Enter roll number %d: ", i + 1);
        scanf("%d", &k);
        
        found = 0; // Reset found flag for each roll number

        // Search for the roll number in the array
        for (int j = 0; j < 6; j++) {
            if (arr[j] == k) {
                found = 1;
                break;
            }
        }

        // Output result
        if (found) {
            printf("Roll number %d is Present!!!\n", k);
        } else {
            printf("Roll number %d is Absent!!!\n", k);
        }
    }

    return 0;
}