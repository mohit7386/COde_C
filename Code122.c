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
     for(int i=0;i<5;i++){
        printf("%d",ptr[i]);
    }
    ptr=realloc(ptr,6); //reallocate the memory with the same pointer ptr and the new size of the memory is now 6 -> realloc(ptr,newsize); 
    printf("Enter first 6 even Numbers:\n");
    for(int i=0;i<6;i++){
       scanf("%d",&ptr[i]);
    }
    //Now Printing the number after reallocation or increasing the number of elements
    printf("Memory Increased with the new size 6..\n");
    for(int i=0;i<6;i++){
        printf("Even Number at %d Position is: %d\n",i,ptr[i]);
    }
   free(ptr); //For best practice always use free(ptr)...
   return 0;
}