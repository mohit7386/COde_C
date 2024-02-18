//Print the numbers from 1 to 5 using while loop...
#include<stdio.h>
int main(){
    int i=1;//first you need to initialise the variable i then only you will use it later otherwise it will give you the error 
    printf("Here are the Printed Numbers Using while loop\n");
    while(i<=5){//here we are checking the condition if it is true then it will print something 
        printf("%d\n",i);
        i++;
    }
    return 0;
}