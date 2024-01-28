//WAP in function and create a simple code which represents the call by reference 
//Basically call by refrence is nothing but if we pass the address of the variable in argument then we called it's a call by refrence 
#include<stdio.h>
void swap (int *a , int *b);
int main (){
    int x , y;
    printf("Enter the value of a and b \n");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("After Swapping the value of x = %d and y = %d\n",x,y); //Call by refrence allows the function to directly modify the value stored at the memory address because in previous x=4 and y=5 then with the change in the address we can change the value at the memory address..
    return 0;
}
//Call by refrence 
void swap(int *a , int *b){
    int t=*a;
    *a=*b;
    *b=t;
}