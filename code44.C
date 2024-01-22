//WAP to find the sum of digits of a number using function..
#include<stdio.h>
int sumofDigits(int num);
int main(){
    int num;
    printf("Enter the digit \n");
    scanf("%d",&num);
    int result=sumofDigits(num);
    printf("Sum of digits of %d is: %d",num,result);
}
int sumofDigits(int num){
    int sum=0;
    while(num!=0){
        sum=sum+num%10; //Here we are extracting the last value and sum the value then after we are adding the values and stored the answer in sum variable..
        num=num/10;
}
return sum;
}

