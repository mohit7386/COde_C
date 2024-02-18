//WAP to check the number is Armstrong or not
#include<stdio.h>
int main(){
    int num,c,arm=0,r;
    printf("Enter any Number\n");
    scanf("%d",&num);
    c=num; //Initialise the value of the num in the C variable because later we need to compare the value for making two condition true or false that's why we are initialising the value in the temporary variable
    while(num>0){ //Checking the condition if num > 0
        r=num%10; //Taking the remainder 
        arm=(r*r*r)+arm; //Cubing the remainder and adding the arm which is zero 
        num=num/10;//It's a quotient value 
    }
    if(c==arm){ //Comparing the value if it is true then number is Armstrong Otherwise Not
        printf("Armstrong Number\n");
    }
    else
    printf("Not an Armstrong Number\n");
    return 0;
}