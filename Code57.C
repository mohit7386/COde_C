//It's an example to better understand the call by value function 
#include<stdio.h>

// Function declaration
void increment(int x);

int main() {
    int num = 5;

    printf("Before calling the function: %d\n", num);

    // Function call
    increment(num); // Using the value of 'num' in the function call

    printf("After calling the function: %d\n", num);//num value will not affect because it uses the copy of the values not the original value so the original value will not affect by the change in the function definition 
    printf("The value of num if we put the increment of 2 in it then it will only change and the value is: %d\n", num + 2);
    return 0;
}

// Function definition
void increment(int x) {
    // Increment the local variable x
    x++;

    printf("Inside the function: %d\n", x);
    // The value of 'x' is only changed inside the function, not affecting the 'num' in the main function
}
