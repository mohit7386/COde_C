//WAP to keep taking Numbers as Input from user until users enter an odd number..
#include<stdio.h>
int main(){
    int num;
    for (int i=1;;i++){ //We are running the Infinite loop
        printf("Enter the number\n");
        scanf("%d",&num); //Here it takes again n again the input from the user because of the loop..
        if(num%2!=0){ //It checks the Condition if it is true than come out of the loop with the help of break statement..
            break;
        }
    }
    printf("Loop Terminates because %d is odd",num); //After come our the loop this will print 
}