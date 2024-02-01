//WAP to print the array of fibonacci series 
#include<stdio.h>
int main (){
    int n;
    printf("Enter limit how many fiboacci numbers you want to print: (n>2)\n");
    scanf("%d",&n);
    int fibo[n]; //Initaiise an array 
    fibo[0] = 0; //Set the value of fibo[0] = 0 because these values are constant 
    fibo[1] = 1;
    printf("Here is your Fibonaccci Series\n");
    printf("%d\t",fibo[0]);
    printf("%d\t",fibo[1]);
    for(int i=2;i<n;i++){ //i starts with 2 we are already printing the value of i=0 and i=1 so that's why we are start from 2 
        fibo[i]=fibo[i-1]+fibo[i-2]; //If we want the nth term then we need to calculate the (n-1)+(n-2) 
        printf("%d\t",fibo[i]);//Print the fibonacci Series 
    }
    return 0;
}