//Now we are learning pointers - A variable that stores the address of another variable...
//WAP to print the value of the pointer...
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr=&age;
    int _age = *ptr;
    printf("The Value of the _age will be the value of the age variable is: %d \n",_age); //Here we are printing the value of the pointer...
    printf("%p\n",&age);
    printf("%p\n",ptr); //Here p is used to print the pointer value 
    printf("%p\n",&ptr); //Here we are printing the address of the pointer 
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr); //Here we are using the 'u' in place of 'p' if you want to understand the address of the pointer then you need to use the u in place of p then it will print the value in the integer form..
    return 0;
}    