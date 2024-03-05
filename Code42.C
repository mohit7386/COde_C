//WAP and do some arithmetic operations.....
#include<stdio.h>
int sum(int a, int b); 
int sub(int c ,int d);//Here we are creating the function of sum name..
int mul(int e , int f);
int main(){
    int a,b,c,d,e,f; //Taking the values from the user
    printf("Enter the Value of a and b for addition:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the Value of C and D for subtraction\n");
    scanf("%d%d",&c,&d);
    printf("Enter the value of e and f for multiplication\n");
    scanf("%d%d",&e,&f);
    int s=sum(a,b); //Holding the sum of a and b in s
    int m=sub(c,d); //Here we are storing the subtraction in new variable m
    int n=mul(e,f); //Calling the multiplication function and storing in n..
    printf("Sum of %d and %d is : %d \n",a,b,s);
    printf("Subtraction of %d and %d is: %d \n",c,d,m);
    printf("Multiplication of %d and %d is: %d\n",e,f,n);
}
int sum(int a, int b){
    return a+b;
}
int sub( int c , int d){
    return c-d;
}
int mul(int e , int f){
    return e*f;
}