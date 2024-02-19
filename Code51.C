//WAP to print the sum of n Natural Numbers Using Recursion...
#include<stdio.h>
int sum (int n);
int main(){
    int n;
    printf("Enter the Value of n\n");
    scanf("%d",&n); 
    printf("The sum of First %d Natural Numbers is: %d\n",n,sum(n)); //here we are calling the sum function 
    return 0;
}
//Recursive Function Definition
int sum (int n){
    if(n==1){ //Here we are terminating the loop and stops the further checking...
        return 1;
    }
    int sumN = sum(n-1)+n; //Here sum function call itself
    return sumN;
}