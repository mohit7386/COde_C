//WAP to allocate the memory for 5 numbers then increse it by 8 dynamically
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    if(ptr==NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }
    printf("Enter Numbers(5):\n");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,13*sizeof(int)); //Here we are reallocating the size of the memory by 8 now thw new size of the memory is 8....reallocation means increase or decrease the memory dynamically
    printf("Enter Numbers(8):\n");
    for(int i=5;i<13;i++){
       scanf("%d",&ptr[i]);
    }
    //Now Printing the number after reallocation or increasing the memory size
    printf("Memory Increased with the size of 3 and now it will be size of 8 \n");
    for(int i=0;i<13;i++){
        printf("Number %d is: %d\n",i,ptr[i]);
    }
   free(ptr);
   return 0;
}