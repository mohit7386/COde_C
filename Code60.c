//WAP in C to find the maximum number Between two Numbers using the pointer...
#include<stdio.h>
void findMax(int *a , int *b);
int main (){
    int x ,y;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&x,&y);
    findMax(&x,&y); //Calling the value using address of the variable..
    return 0;
}
//Call by Refrence Function 
void findMax(int *a , int *b){
    if(*a>*b){
        printf("Max Number is a\n");
    }
    else{
    printf("Max Number is b\n");
    }
}