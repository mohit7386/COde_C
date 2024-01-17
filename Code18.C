//WAP to check the given number is a Natural Number or not..
#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number\n");
    scanf("%d",&num);
    if(num>0 && num!=0){
        printf("Given Number is a Natural Number\n");
    }
    else {
        printf("Negative Number Not a Natural Number\n");
    }
    return 0;
}