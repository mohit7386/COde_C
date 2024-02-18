//WAP to keep taking input from user and until user enters the number which is the multiple of 7..
#include<stdio.h>
int main(){
    int num;
    for(int i=1;;i++){ //We don't give the condition because hum loop ko rokenge break ki help se isiliye hum loop ko stop karne ke liye koi condition nahi denge....
        printf("Enter the number\n");
        scanf("%d",&num); //Taking input again n again from the user..
        if(num%7==0){ //Multiple of 7 -> Number which is divisible by 7.
            break; //Terminate the loop
        }
    }
    printf("Loop terminates because %d is a multiple of 7\n",num);
    return 0;
}