//Wap to print the table of any number in a reverse order given by the user..
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number you want to print the table\n");
    scanf("%d",&num);
    printf("The table of %d in reverse order:\n",num);
    for(int i=10;i>=1;i--){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}