//Create an array of size 5 (Using Calloc) & enter it's values from the user 
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
    printf("Values Entered by the user are:- \n");
    for(int i=0;i<5;i++){
        printf("Number %d is: %d\n",i,ptr[i]);
    }
   free(ptr);
   return 0;
}