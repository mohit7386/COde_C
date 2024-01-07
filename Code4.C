//Explicit Conversion 
#include<stdio.h>

int main() {
    int a = 4; int c=1.999999;
    float b = 3.4;
    float sum;

    sum = a + b;
    
    printf("The Sum of a and b is: %d \n", (int)sum); //Here we cannot convert float to int that's why we do the type conversion and force the compiler to give the answer in integer value.
    printf("%d \n",(int)3.2/2); //Here both the values are one is Integer value and other one is floating value so we force the compiler to convert the Integer Values to the Floating Values.
    printf("%d",c);
    return 0;
} 
