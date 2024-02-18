//WAP to keep taking Numbers as Input from user until users enter an odd number..and we are seeing the how break statement works  when we put break after any statement then what will happen...
#include<stdio.h>
int main(){
    int num;
    for (int i=1;;i++){ //We are running the Infinite loop because hum rokna nahi chahte loop ko tab tak jab tak ki koi Odd Number nahi aa jaata hai tab tak ye loop run karega uske baad hi terminate hogi condition 
        printf("Enter the number\n");
        scanf("%d",&num); //Here it takes again n again the input from the user because of the loop..
        if(num%2!=0){ //It checks the Condition if it is true than come out of the loop with the help of break statement..
            break;
        }
    }
    printf("Loop Terminates because %d is odd",num); //After come out of the loop this statement will print 
}