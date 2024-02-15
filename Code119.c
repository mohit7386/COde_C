//WAP and free the memory used by calloc 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the Value of n\n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int * )calloc(n,sizeof(int)); //here we cannot multiply the size of int to the n because it's a calloc not a malloc in calloc we cannot multiply....where n is our no of locations you want and size of int is the per location size...
    if(ptr==NULL){ //In Case of any kind of failure then the statement will print 
        printf("Memory Allocation failed");
    }
    printf("Memory dynamically allocated successfully and initialise with zero because of calloc \n");
    for(int i=0;i<n;i++){ //Running a loop for priting the values of ptr which is zero because in calloc the initialisation of the values is already zero.
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    ptr=(int * )calloc(4,sizeof(int)); //here we cannot multiply the size of int to the n because it's a calloc not a malloc in calloc we cannot multiply....where n is our no of locations you want and size of int is the per location size...
    if(ptr==NULL){ //In Case of any kind of failure then the statement will print 
        printf("Memory Allocation failed");
    }
    printf("After Using free(ptr) only 4 locations of memory is reserved and rest are free so that's why  \n");
    for(int i=0;i<4;i++){ //Running a loop for priting the values of ptr which is zero because in calloc the initialisation of the values is already zero. and 4 memory locations is reserved and rest are free wi the help of free(ptr)...
        printf("%d\n",ptr[i]); //So the value changes after freeing the memory 
    }
    return 0;
}