//Write the program to find the given number is divisible by 2 or not
#include<stdio.h>
int main(){
    int num;
printf("Enter any Number\n");
scanf("%d",&num);
if(num%2==0) //Here Modulo gives us remainder 0 and in if condition we are checking the condition if it gives the remainder 0 then number is divisible otherwise Not....
printf("Number is divisible by 2");
else
printf("Number is not divisible by 2");
return 0;
}