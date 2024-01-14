//Write the program to Check the age whether he or she is suitable for 
#include<stdio.h>
int main(){
    int age;
    printf("Enter Your Age \n");
    scanf("%d",&age);
    if(age>18){
        printf("You are an Adult\n");
        printf("You are eligible to Vote\n");
        printf("You are eligible to drive the Car and Bike\n");
    }
    else{
        printf("You are Not an adult\n");
    }
}
































