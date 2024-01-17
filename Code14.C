//WAP for Nested If else-----
#include<stdio.h>
int main(){
    int num;
    printf("Enter any Number\n");
    scanf("%d",&num);
    if(num>0){
        printf("Number is positive\n");
        if(num%2==0){      //This is we called Nested if because it's if inside if 
            printf("Number is Even\n");
        }
        else{
            printf("Number is Odd\n");
        }
    }
    else{
        printf("Number is Negative\n");
    }
}