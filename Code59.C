//WAP to program in function to calculate the sum ,product and average of 2 numbers. and print all the values in the main function..
#include <stdio.h>

// Function to calculate sum, product, and average
void calculateValues(int a, int b, int *sum, int *product, float *average); //So if we want to print all the values using function then we are using the pointer because function can only return one value at a time..It means ki function ek hi data type ki values ko return kar sakta hai agar hum multiple data type ki values ko return karayenge to hume need hogi pointers ki multiple values ko return karane ke liye isiliye humne yahan pe pointers use kiye hain...
int main() {
    int num1, num2, sum, product;
    float average;

    // User input
    printf("Enter the value for number 1:\n ");
    scanf("%d", &num1);
    printf("Enter the value for number 2:\n ");
    scanf("%d", &num2);

    // Calculate values using the function
    calculateValues(num1, num2, &sum, &product, &average); 

    // Print the results in the main function
    printf("These are the Values Below:-\n");
    printf("Sum of %d and %d is: %d\n",num1,num2, sum);
    printf("Product of %d and %d is: %d\n",num1 ,num2, product);
    printf("Average of %d and %d is: %.2f\n",num1,num2, average); //Here %.2f is used to print the value with 2 decimal place 
    return 0;
}
// Function definition to calculate sum, product, and average
//It's a Call by refrence we are using the pointer in place of function..
void calculateValues(int a, int b, int *sum, int *product, float *average) {
    // Calculate sum, product, and average
    *sum = a + b; //agar hum pointers use kar rahe hain to function definition me logic likhte waqt hum * (Pointer) ks use karenge kyuki fr wo point karega value at the address par then value ko access kar paayenge 
    *product = a * b;
    *average = (float)(*sum) / 2;
}
//In this Program we use pointers because to modify the values of these variables directly in the main program....
