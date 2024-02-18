//WAP to print the numbers between 1 to 5 using do while loop...
#include<stdio.h>
int main(){
    int i=1;
    do
    {
        printf("%d\n",i); //first value of i is always printed and the value is 1 
        i++; //After printing the value we are increment the value of i then only check the condition is it true or false... 
    } while (i<=5);
    return 0;
}