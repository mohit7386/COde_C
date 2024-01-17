//Here WAP to print the sum of n natural numbers..
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i; //Here sum up the value of the i into the sum...
    }
     printf("The Sum of all the numbers is: %d\n",sum);
    return 0;
}