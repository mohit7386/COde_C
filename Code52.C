//WAP to print the factorial of any number using recursion
#include<stdio.h>

int calculateFactorial(int n);

int main() {
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("The Factorial of %d is: %d", n, calculateFactorial(n));
    return 0;
}

// Recursive Function
int calculateFactorial(int n) {
    if (n == 1) { //Terminating the recursion 
        return 1;
    }
    int fact = calculateFactorial(n - 1) * n; //Function Calling itself and calculating the factorial n-1 and decreasing the value and transfer to the if then it checks the condition and if it is true then prints the factorial
    return fact;
}
