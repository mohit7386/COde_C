//WAP to keep taking input from user and until user enters the number which is the multiple of 7..
#include<stdio.h>
int main(){
    int num;
    for(int i=1;;i++){
        printf("Enter the number\n");
        scanf("%d",&num); //Taking input again n again from the user..
        if(num%7==0){ //Multiple of 7 -> Number which is divisible by 7.
            break;
        }
    }
    printf("Loop terminates because the number is a multiple of 7\n");
    return 0;
}