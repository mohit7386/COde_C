#include <stdio.h>
//Define a macro
#define Rows 10 //We can also define the rows and columns in the C language for better understanding...
#define cols 2
// Function to generate and print the multiplication table
void generateMultiplicationTable(int arr[Rows][cols]); // 2D Array in function - 10 is represent for the row of the 2D array and 2 represents the column of the 2D array.

int main() {
    int arr[Rows][cols];  //Declare a 2D array to store the multiplication table

    // Call the function to generate and print the multiplication table
    generateMultiplicationTable(arr);

    return 0;
}

// Definition of the function
void generateMultiplicationTable(int arr[Rows][cols]) {
    // Populate the array with the multiplication table of 2 and 3
    for (int i = 0; i < Rows; i++) { // i is for rows and j is for columns in the 2D array...
        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                arr[i][j] = 2 * (i + 1);  // Yahan par 2*(i+1) hai that means ki i=0 hai to 2*(0+1)=2 and jo multiply hoke arr[i][j] me store hota rahega and yahan par i liya humne logic me wo isiliye kyuki i is for row and hume logic ko 10 bar chalwana hai that's why we Store the multiples of 2
            } else if (j == 1) {
                arr[i][j] = 3 * (i + 1);  // Store the multiples of 3
            }
        }
    }

    // Print the 2D array (multiplication table)
    printf("Multiplication Table of 2 and 3:\n");
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t ", arr[i][j]);
        }
        printf("\n");
    }
}
