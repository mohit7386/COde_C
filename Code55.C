//WAP to print the nth term of the fabonacci - Pronounce this as fabonachi- because it's a italian word 
#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("Enter Which term you want to print in the result\n");
    scanf("%d",&n);
    printf("The Fibonacci value of the %dth term is: %d",n,fib(n));
    return 0;
}
//Recursive function 
int fib(int n){
    if(n==0){ //Base Case for terminating the recursion
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibnm1=fib(n-1); //Here function call itself so it's a recirsive function 
    int fibnm2=fib(n-2);
    int fibN= fibnm1+fibnm2;
    return fibN;
}