//Write the Program to find the average of the three numbers.
#include<stdio.h>
int main (){
    int a,b,c,Average;
    printf("Enter the three Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    Average =(a+b+c)/3;
    printf("The Average of the three numbers is: %d",Average);
    return 0;
}