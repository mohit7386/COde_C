#include<stdio.h>
//So here it's a simple program of call by value in function 
// Function declaration
void increment(int x);

int main() {
    int num = 5;

    printf("Before calling the function: %d\n", num);

    // Function call
    increment(num); //x use kar rha hai num ki value because we are calling the function with num value

    printf("After calling the function: %d\n", num); //but here the value of num is 5 num is not affected by function because ye copy banata hai usme change krta hai hamare main function me value me koi change nahi aayega..
    printf("The value of num if we put the increment of 2 in it then it will only change and the value is: %d\n",num+2); //But agar hum change krna chahte hain apni value me to hum use karenge increment or decrement operator apne code mein..
    return 0;
}

// Function definition
void increment(int x) {
    // Increment the local variable x
    x++;

    printf("Inside the function: %d\n", x); //here 'x' is incremented and the value of x comes from the num because we call the num value in our increment function so after calling it will print the value of x is 6 because of increment operator  
//So abhi tak jo bhi humne functions banaye hain chahe wo user defined hon chahe wo pre defined values hon saare hamare call by Values hi the...
}
