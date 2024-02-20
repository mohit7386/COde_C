//WAP in function and create a simple code which represents the call by reference 
//Basically call by refrence is nothing but if we pass the address of the variable in argument then we called it's a call by refrence 
#include<stdio.h>
void swap (int *a , int *b);
int main (){
    int x , y;
    printf("Enter the value of x and y \n");
    scanf("%d%d",&x,&y);
    swap(&x,&y); //Here we are passing the address of the variables in the argument this is what we called as call by refrence
    printf("After Swapping the value of a = %d and b = %d\n",x,y); //There is no change if you also put the address before the variable of x and y the answer will be same as before //Call by refrence allows the function to directly modify the value stored at the memory address because in previous x=4 and y=5 then with the change in the address we can change the value at the memory address..
    return 0;
}
//Call by refrence 
void swap(int *a , int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
//In "call by reference," when you pass a variable to a function, you are passing its memory address rather than its value. This means that any changes made to the variable inside the function will affect the original variable in the calling function.
//Suppose if we pass x=5 and y= 7 then after swapping it will be x=7 and y=5 this is because of call by reference but you cannot do it in functions