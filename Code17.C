//WAP to check the number is Armstrong or not
#include<stdio.h>
int main(){
    int num,c,arm=0,r;
    printf("Enter any Number\n");
    scanf("%d",&num);
    c=num;
    while(num>0){
        r=num%10;
        arm=(r*r*r)+arm;
        num=num/10;
    }
    if(c==arm){
        printf("Armstrong Number\n");
    }
    else
    printf("Not an Armstrong Number\n");
    return 0;
}