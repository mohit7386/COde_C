//Explicit Conversion 
#include<stdio.h>

int main() {
    int a = 4; float c=1.999999;
    float b = 3.4;
    float sum;

    sum = a + b;
    
    printf("The Sum of a and b is: %f \n", sum);
    printf("The Sum of a and b after typecasting float to int is: %d \n", (int)sum); //Here we cannot convert float to int that's why we do the type conversion and force the compiler to give the answer in integer value.
    printf("%d \n",(int)3.2/2); //Here both the values are one is Integer value and other one is floating value so we force the compiler to convert the Floating Values to the Integer Values.
    printf("%f\n",c); //This will give you the correct floating point value in result
    printf("After Typecasting floating value to the Integer Value: %d\n ",(int)c); //Here we are typecasting the value of C (Floating Value) to the Integer Value 
    printf("Modulo Operator gives us Remainder Value when we divide 31 by 5: %d",31%5);
    return 0;
} 
