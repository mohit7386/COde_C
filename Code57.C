//It's an example to better understand the call by value function 
#include<stdio.h>

// Function declaration
void increment(int a);

int main() {
    int num = 5; //setting the value of the num 

    printf("Before calling the function: %d\n", num);

    // Function call
    increment(num); // Using the value of 'num' in the function call

    printf("After calling the function: %d\n", num);//num value will not affect because it uses the copy of the values not the original value so the original value will not affect by the change in the function definition and here the value of x increases but the value of x in function decleration is not affecting the value in main..
    printf("The value of num if we put the increment of 2 in it then it will only change the value in the main function: %d\n", num + 2); //The value will change only when we change in the main function...Otherwise the value is not changed
    return 0;
}

// Function definition+
void increment(int x) {
    // Increment the local variable x
    x++;

    printf("Inside the function the value of the x is: %d\n", x);
    // The value of 'x' is only changed inside the function, not affecting the 'num' in the main function
}
