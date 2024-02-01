#include <stdio.h>

// Function to generate and print the multiplication table
void generateMultiplicationTable(int arr[][2]); //2D Array in function 

int main() {
    int arr[10][2];  // Declare a 2D array to store the multiplication table

    // Call the function to generate and print the multiplication table
    generateMultiplicationTable(arr);

    return 0;
}

// Definition of the function
void generateMultiplicationTable(int arr[][2]) {
    // Populate the array with the multiplication table of 2 and 3
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                arr[i][j] = 2 * (i + 1);  // Store the multiples of 2
            } else if (j == 1) {
                arr[i][j] = 3 * (i + 1);  // Store the multiples of 3
            }
        }
    }

    // Print the 2D array (multiplication table)
    printf("Multiplication Table of 2 and 3:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%2d  ", arr[i][j]);
        }
        printf("\n");
    }
}
