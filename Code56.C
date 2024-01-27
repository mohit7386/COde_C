//Now we are learning pointers - A variable that stores the address of another variable...
//WAP to print the value of the pointer...
#include<stdio.h>
int main(){
    int age = 22;
    int a =5;
    int *abc=&a;
    int *ptr=&age;
    int _age = *ptr;
    printf("The Value of the _age will be the value of the age variable is: %d \n",_age); //Here we are printing the value of the pointer...
    printf("%p\n",&age);
    printf("%p\n",ptr); //Here p is used to print the address value 
    printf("%p\n",&ptr); //Here we are printing the address of the pointer 
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr); //Here we are using the 'u' in place of 'p' if you want to understand the address of the pointer then you need to use the u in place of p then it will print the value in the integer form..
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age)); //All the three values are same and prints 22 
    printf("%d",abc);
    return 0;
    //In pointer asterix (*) means value at that address..
}    