//WAP in C Use Library Function and print the square of the given number..
#include<stdio.h>
#include<math.h> //It's also a header file which do some mathematical tasks like square root , Power of any number , and many more.. 
void calculateSquare(int num); //Function Declerartion 
int main (){
    int num;
    printf("Enter any Number you want to print the square\n");
    scanf("%d",&num); //Taking the number from user
    calculateSquare(num); //here Num is a argument used to send the value to the decleration part and after the function works
    return 0;
}
void calculateSquare(int num){ //Here int num is our parameter and used to receive the value from the function call..
    float square=pow(num,2); //Pow is a keyword used in to calculate the power of the given number..Here we are using float in place of int because 'pow' is a library function and the result of the 'pow' function is a floating point value...so that's why I am using float in place of int for getting the correct answer in result....
    printf("The Square of the %d is: %f\n",num,square); //here I am using float to print the answer in floating point value because the value compile takes in float and if we want the answer in integer then it round off the digits after point and including point also so for getting the full and correct output we need to put the result in float...
}