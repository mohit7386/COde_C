//WAP to allocate memory with calloc() and see how calloc initialise the value to 0
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr=(float*)malloc(5*sizeof(float)); //Dynamic memory Allocation through malloc and printing the floating point values
    if(ptr==NULL){
        printf("Memory Allocation Failed\n");
    }
    printf("With the help of calloc() function All the Values is initialising with 0\n");
    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
    free(ptr);
    return 0;
}