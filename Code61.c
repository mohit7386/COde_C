//Just for clearing the logic 
#include<stdio.h>
int main(){
    float b = 5.0;
    int a = 5;
    if (a==b){ //In == Operator Compiler checks the values also checks the data types if possible then it converts the type before the comparison....do the implicit conversion and here int convert into float then the result should be true.... 
        printf("Yes Values are equal\n");
    }
    else
    printf("Values are not equal after implicit conversion\n");
    return 0;
}