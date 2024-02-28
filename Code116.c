//WAP to allocate memory to store the 5 Prices..
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr=(float*)malloc(5*sizeof(float)); //Dynamic memory Allocation through malloc and printing the floating point values
    if(ptr==NULL){
        printf("Memory Allocation Failed\n");
    }
    printf("Enter the Numbers:\n");
    for(int i=0;i<5;i++){
        scanf("%f",&ptr[i]);
    }
    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9;
    printf("Printing the Values in Floating Points through the dynamic memory allocation!\n");
    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
    free(ptr);
    return 0;
}