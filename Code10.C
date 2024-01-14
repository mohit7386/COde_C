//Write the program to check the age variations
#include<stdio.h>
int main(){
    int age;
    printf("Enter Your Age \n");
    scanf("%d",&age);
    if(age>=18){
        printf("You are an Adult\n");
    }
    else if (age >13 && age <18){
        printf("You are a Teenager\n");
    }
    else
    printf("You are a Child\n");
    return 0;
}