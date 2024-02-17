//Program to check how the ternary Operator will work....
#include<stdio.h>
int main(){
    int age;
    printf("Enter the Age\n");
    scanf("%d",&age);
    age>=18?printf("Congratulations! You are an Adult\n"):printf("You are not an adult\n");
    printf("%d",!(3>5)); //Here not operator is used to reverse the statement like it gives false but after putting the ! operator then it flips the statement and gives true which is 1..
    return 0;
    
}