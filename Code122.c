//WAP to allocate the memory to store the first 5 odd numbers then reallocate it to store 6 even Numbers..
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    if(ptr==NULL){
        printf("Memory Allocation Failed\n");
    }
    printf("Enter first five odd Numbers:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,6);
    printf("Enter first 6 even Numbers:\n");
    for(int i=0;i<6;i++){
       scanf("%d",&ptr[i]);
    }
    //Now Printing the number after reallocation or increasing the memory size
    printf("Memory Increased with the size of 6 and now it will be size of 11 \n");
    for(int i=0;i<6;i++){
        printf("Even Number at %d Position is: %d\n",i,ptr[i]);
    }
   free(ptr);
   return 0;
}