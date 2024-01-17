//Wap to print the table of any number given by the user..
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number you want to print the table\n");
    scanf("%d",&num);
    printf("The table of %d is:\n",num);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}