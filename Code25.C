//WAP to print the numbers from 0 to n..
#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter the number where you want to print the numbers\n");
    scanf("%d",&num);
    printf("Numbers are\n");
    while (i<=num)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}