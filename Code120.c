//WAP to allocate the memory for 5 numbers then increse it by 8 dynamically
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    if(ptr==NULL){
        printf("Memory Allocation Failed\n");
    }
    printf("Enter Numbers(5):\n");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("Enter Numbers(8):\n");
    for(int i=0;i<8;i++){
       scanf("%d",&ptr[i]);
    }
    //Now Printing the number after reallocation or increasing the memory size
    printf("Memory Increased with the size of 3 and now it will be size of 8 \n");
    for(int i=0;i<8;i++){
        printf("Number %d is: %d\n",i,ptr[i]);
    }
   free(ptr);
   return 0;
}