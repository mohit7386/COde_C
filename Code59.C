//WAP to program in function to calculate the sum ,product and average of 2 numbers. and print all the values in the main function..
#include <stdio.h>

// Function to calculate sum, product, and average
void calculateValues(int a, int b, int *sum, int *product, float *average); //So if we want to print all the values using function then we are using the pointer because function can only return one value at a time..

int main() {
    int num1, num2, sum, product;
    float average;

    // User input
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Calculate values using the function
    calculateValues(num1, num2, &sum, &product, &average); 

    // Print the results in the main function
    printf("These are the Values Below:-\n");
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average); //Here %.2f is used to print the value with 2 decimal place 

    return 0;
}

// Function definition to calculate sum, product, and average
//It's a Call by refrence we are using the pointer in place of function..
void calculateValues(int a, int b, int *sum, int *product, float *average) {
    // Calculate sum, product, and average
    *sum = a + b;
    *product = a * b;
    *average = (float)(*sum) / 2;
}
