//Just for clearing the logic 
#include<stdio.h>
int main(){
    float b = 5.2;
    int a = 5;
    if (a==b){ //In == Operator Compiler checks the values also checks the data types if possible then it converts the type before the comparison....do the implicit conversion and here int convert into float then the result should be true.... 
        printf("Yes Values are equal\n");
    }
    else
    printf("Values are not equal after implicit conversion\n");
    return 0;
}
// Comparison Using == Operator: The if statement checks if the value of a is equal to the value of b using the equality (==) operator. This operator checks both the values and the data types. If the data types are different, the compiler tries to perform implicit conversion.

// Implicit Conversion: In this case, a is an integer, and b is a float. Before comparing, the compiler performs implicit conversion, converting the integer a to a float. This means it compares the floating-point values 5.0 (converted from a) and 5.2 (from b).

// Print Result: Depending on the result of the comparison, the program prints either "Yes Values are equal" or "Values are not equal after implicit conversion".