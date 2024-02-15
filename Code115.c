//In this Program we are seeing the dynamic memory allocation and how malloc function will work 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(5 * sizeof(int));//we are typecasting the value of the malloc because gives the pointer in void but we need integer type of memory so that's why we typecasting the value of the malloc and multiplying by the size of the data type..
    //Memory is allocated on the runtime...dynamically allocated memory 
    if(ptr==NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }
    ptr[0] = 1; //Assigning memory allocation dynamically at 0th location 
    ptr[1] = 3; //At 1st Position 
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    printf("Odd Numbers will Dynamically allocated as: \n");
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]); //Printing all the values which is present at different locations..
    }
free(ptr);
    return 0;
}